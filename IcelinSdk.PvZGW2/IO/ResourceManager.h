#pragma once

/** @brief Provides the declaration for the `ResourceManager` class. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Core/ResourceManagerSettings.h>
#include <IcelinSdk.PvZGW2/Core/SmartRef.h>
#include <IcelinSdk.PvZGW2/Core/String.h>
#include <IcelinSdk.PvZGW2/IO/AsyncResourceLoader.h>
#include <IcelinSdk.PvZGW2/IO/Compartment.h>
#include <IcelinSdk.PvZGW2/IO/InplaceReloadSupport.h>
#include <IcelinSdk.PvZGW2/IO/IResourceLoader.h>
#include <IcelinSdk.PvZGW2/IO/ResourceCompartment.h>
#include <IcelinSdk.PvZGW2/IO/ResourceSystem.h>
#include <IcelinSdk.PvZGW2/IO/RuntimeDatabaseDomain.h>
#include <IcelinSdk.PvZGW2/IO/RuntimeDatabaseManager.h>
#include <IcelinSdk.PvZGW2/IO/SuperbundleMountListener.h>
#include <IcelinSdk.PvZGW2/IO/TurboLoaderSupport.h>
#include <IcelinSdk.PvZGW2/IO/VirtualFileSystem.h>
#include <IcelinSdk.PvZGW2/Memory/MemoryArena.h>
#include <IcelinSdk.PvZGW2/Synchronization/CriticalSection.h>
#include <IcelinSdk.PvZGW2/TypeInfo/BaseTypeInfo.h>
#include <IcelinSdk.PvZGW2/Utilities/Optional.h>

#include <EASTL/fixed_map.h>
#include <EASTL/fixed_vector.h>
#include <EASTL/hash_map.h>
#include <EASTL/vector.h>

namespace fb
{

class TurboLoader;

class ResourceManager {
public:
  class Compartment;

private:
  struct ResourceLoaderRecord {
    u32 typeNameHash;
    IResourceLoader *loader;
    TurboLoaderSupport turboSupport;
    InplaceReloadSupport reloadSupport;
    u32 loadRangeCountPerResource;
  };

  typedef eastl::fixed_map<u32, ResourceCompartment, ResourceCompartment_Count_, false> NameHashToCompartmentMap;
  typedef eastl::vector<ResourceLoaderRecord> LoaderList_t;
  typedef eastl::hash_map<const TypeInfo *, eastl::fixed_vector<ResourceSystem *, 4, false>> TypeToSystemMap;

  volatile u32 m_bundleLoadInProgress;
  Compartment *m_compartments[ResourceCompartment_Count_];

  NameHashToCompartmentMap m_nameHashToCompartment;

  u32 m_compartmentNameHashes[ResourceCompartment_Count_];
  u32 m_compartmentTypeHashes[ResourceCompartmentType_Count_];

  MemoryArena &m_resourceMgrHeap;

  CriticalSection m_lock;

  u32 m_sequenceNumber;

  LoaderList_t m_loaders;

  SmartRef<VirtualFileSystem> m_fileSystem;
  fb::String m_resPathPrefix;
  AsyncResourceLoader *m_asyncResourceLoader;
  TurboLoader *m_turboLoader;
  Optional<RuntimeDatabaseManager> m_databaseManager;
  RuntimeDatabaseDomain *m_platformDomain;

  ResourceManagerSettings *m_settings;

  volatile bool m_isShuttingDown;
  
  u32 m_ignoredResourceTypeNameCount;
  u32 m_ignoredResourceTypeNames[64];

  TypeToSystemMap m_typeToSystemMap;

  SuperbundleMountListener *m_superbundleMountListener;

  Compartment *m_currentlyLoadingCompartment;
};

}
