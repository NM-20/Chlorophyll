#pragma once

/** @brief Provides the declaration for the `ResourceManager::Compartment` class. */

#include <IcelinSdk.PvZGW2/CriticalSection.h>
#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Guid.h>
#include <IcelinSdk.PvZGW2/Core/IResourceObject.h>
#include <IcelinSdk.PvZGW2/IO/ChunkMetaRecord.h>
#include <IcelinSdk.PvZGW2/IO/DatabaseDomain.h>
#include <IcelinSdk.PvZGW2/IO/DomainInfo.h>
#include <IcelinSdk.PvZGW2/IO/ResourceCompartment.h>
#include <IcelinSdk.PvZGW2/IO/ResourceHandle.h>
#include <IcelinSdk.PvZGW2/IO/ResourceManager.h>
#include <IcelinSdk.PvZGW2/IO/ResourceRefResolver.h>
#include <IcelinSdk.PvZGW2/IO/ResourceSysInvocation.h>
#include <IcelinSdk.PvZGW2/Memory/MemoryArena.h>
#include <IcelinSdk.PvZGW2/TypeInfo/ITypedObject.h>

#include <EASTL/set.h>
#include <EASTL/vector.h>

namespace fb
{

class CompartmentInterimBase {
private:
  typedef eastl::vector<ResourceHandle *> HandleVector;

  HandleVector m_reduxHandles;
  u32 m_loadedHandlesCount;
  u16 m_bankCount;
};

class ResourceManager::Compartment : public CompartmentInterimBase {
private:
  typedef eastl::vector<IResourceObject *> ResourceObjectVector;
  typedef eastl::vector<DataContainer *> DataContainerVector;
  typedef eastl::vector<Guid> GuidVector;
  typedef eastl::vector<ITypedObject *> ObjectVector;
  typedef eastl::vector<DataContainer *> DcObjectVector;
  typedef eastl::vector<ChunkMetaRecord> ChunkMetaVector;
  typedef eastl::set<u32> LoadedBundleHashes;

  MemoryArena &m_realHeap;

  CriticalSection m_compartmentLock;
  ResourceCompartment m_thisCompartmentTag;
  ResourceCompartment m_parentCompartmentTag;

  DatabaseDomain *m_domain;
  DomainInfo m_domainInfo;

  ResourceObjectVector m_pendingPostloads;
  DataContainerVector m_dataContainersToUnregister;
  GuidVector m_availableChunks;
  ObjectVector m_batchObjects;
  ObjectVector m_affectedObjects;
  DataContainerVector m_dataContainers;

  ResourceSysInvocation m_invocations[24];
  u32 m_invocationIndex;
  u32 m_invocationCount;
  u32 m_invocationGroupSize;
  bool m_invocationRetry;

  DcObjectVector m_savedBatchRefsDbx;
  ResourceObjectVector m_savedBatchRefsRes;

  ChunkMetaVector m_chunkMetaVector;
  const u32 *m_chunkFilter;
  int m_chunkFilterCount;
  void *m_chunkMetaBlock;

  bool m_isPostLoading;
  bool m_chunkLoadsPending;
  bool m_ownsArena;

  ResourceRefResolver *m_resourceRefResolver;

  LoadedBundleHashes m_loadedBundleHashes;
};
  
}