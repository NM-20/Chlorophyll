#pragma once

/** @brief Provides the declaration for the `InternalDatabaseDomain` class. */

#include <IcelinSdk.PvZGW2/Core/Guid.h>
#include <IcelinSdk.PvZGW2/Core/ResourceRef.h>
#include <IcelinSdk.PvZGW2/IO/DatabaseLazyResolvePartitionInfo.h>
#include <IcelinSdk.PvZGW2/IO/DomainInfo.h>
#include <IcelinSdk.PvZGW2/IO/InternalDatabaseState.h>
#include <IcelinSdk.PvZGW2/Memory/MemoryArena.h>
#include <IcelinSdk.PvZGW2/Memory/StackAllocator.h>
#include <IcelinSdk.PvZGW2/Synchronization/ReaderWriterLock.h>

#include <EASTL/hash_map.h>

namespace fb
{

class InternalDatabaseDomain {
public:
  enum LazyResolvePolicy {
    LrpAllowDiskAccesses  = 0,
    LrpForbidDiskAccesses = 1,
  };

private:
  /* Fb 2014 seems to have removed `DatabaseDomain` (the base class) entirely
     as part of its migration to `RuntimeDatabaseManager`.
     There's no signs of there being three different `DatabaseDomain` classes
     (in GW2 at least), and other resources point to a removal as well.
  */

  typedef eastl::hash_map<Guid, DatabaseLazyResolvePartitionInfo> LazyResolvePartitionList_t;

  MemoryArena &m_arena;
  char pad_0010[0x0008];
  InternalDatabaseState &m_databaseState;
  const DomainInfo &m_domainInfo;

  char pad_0028[0x0008];

  /* TODO: Is there a structure here? The constructor has an odd if statement
     wrapping initialization for these fields.
  */
  ReaderWriterLock m_lock;
  StackAllocator m_lazyAllocator;
  LazyResolvePartitionList_t m_lazyPartitionList;

  char pad_0088[0x0008];

public:
  virtual void Unknown1();
  virtual void Unknown2();
  virtual void Unknown3();
  virtual void Unknown4();
  virtual void Unknown5();

  virtual void addResourceRefForResolve(ResourceRef *ref);

  virtual void Unknown6();
  virtual void Unknown7();
  virtual void Unknown8();

  virtual MemoryArena &arena() const;
  virtual ~InternalDatabaseDomain();

  virtual void resolveAllLazyPartitions(LazyResolvePolicy policy);

  virtual void Unknown9();
};

}
