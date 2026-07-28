#pragma once

/** @brief Provides the declaration for the `RuntimeDatabaseDomain` class. */

#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Guid.h>
#include <IcelinSdk.PvZGW2/IO/DatabasePartition.h>
#include <IcelinSdk.PvZGW2/IO/InternalDatabaseDomain.h>
#include <IcelinSdk.PvZGW2/IO/ResourceCompartment.h>
#include <IcelinSdk.PvZGW2/IO/ResourceRefResolver.h>
#include <IcelinSdk.PvZGW2/IO/RuntimeDatabasePartition.h>
#include <IcelinSdk.PvZGW2/Synchronization/CriticalSection.h>
#include <IcelinSdk.PvZGW2/Utilities/GuidHash.h>

#include <EASTL/functional.h>
#include <EASTL/hash_map.h>
#include <EASTL/vector.h>
#include <EASTL/vector_set.h>

namespace fb
{

class RuntimeDatabaseDomain : public InternalDatabaseDomain {
public:
  typedef eastl::vector<RuntimeDatabaseDomain *> DomainList_t;
  
private:
  typedef eastl::hash_map<const Guid *, RuntimeDatabasePartition *, GuidHash, GuidHash> GuidMap_t;
  typedef eastl::vector<RuntimeDatabasePartition *> PartitionListInternal_t;
  typedef eastl::vector_set<DatabasePartition *, eastl::less<DatabasePartition *>> PartitionSet_t;

  ResourceCompartment m_compartment;
  ResourceRefResolver *m_resRefResolver;
  DomainList_t m_imports;
  CriticalSection m_lock;

  /* TODO: There's not only a hashmap here, but some `u8` value as well. Try
     figuring out what it is.
  */
  char pad_00F0[0x0038];
  
  GuidMap_t m_guidMap;
  char pad_0158[0x0030];
  PartitionListInternal_t m_partitions;
  PartitionSet_t m_newlyLoadedPartitions;

  /* TODO: Older Fb games use a `ScopedPtr` to `CtrToPartitionMap_t`, but 2014
     seems to allocate a new structure CONTAINING the map.
     We'll leave it as padding for now, but attempt to figure out what this is
     at some point.
  */
  char pad_01D0[0x0008];
};

}
