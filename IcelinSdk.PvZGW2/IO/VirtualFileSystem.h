#pragma once

/** @brief Provides the declaration for the `VirtualFileSystem` class. */

#include <IcelinSdk.PvZGW2/Core/RefCountBase.h>
#include <IcelinSdk.PvZGW2/Core/ScopedPtr.h>
#include <IcelinSdk.PvZGW2/Core/SmartRef.h>
#include <IcelinSdk.PvZGW2/IO/FsBackend.h>
#include <IcelinSdk.PvZGW2/Synchronization/CriticalSection.h>
#include <IcelinSdk.PvZGW2/Utilities/HashString.h>
#include <IcelinSdk.PvZGW2/Utilities/StringCompare.h>

#include <EASTL/hash_map.h>
#include <EASTL/hash_set.h>
#include <EASTL/map.h>
#include <EASTL/string.h>
#include <EASTL/vector.h>

namespace fb
{

class VfsNode {
private:
  struct ChildRecord {
    eastl::string name;
    VfsNode *node;
  };

  typedef eastl::vector<ChildRecord> ChildVec;

  SmartRef<FsBackend> m_mountedFs;
  ChildVec m_children;
  int m_flags;
};

class VfsImpl {
private:
  typedef eastl::hash_map<FsBackend *, int> MountCount;
  typedef eastl::hash_set<eastl::string, HashStringNoCase, NoCaseStringEquals> DirSet;
  typedef eastl::map<FsBackend *, DirSet> FsDirCache;

  CriticalSection m_lock;
  ScopedPtr<VfsNode> const m_root;
  eastl::string m_defaultPrefix;
  MountCount m_mountCounts;
  FsDirCache m_directoryCache;
  bool m_updateInProgress;
};

class VirtualFileSystem : public RefCountBase {
private:
  VfsImpl *m_impl;

public:
  ~VirtualFileSystem();
};

}
