#pragma once

/** @brief Provides the declaration for the `SuperBundleManager` class and all related types. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Core/Guid.h>
#include <IcelinSdk.PvZGW2/Core/SHA1.h>
#include <IcelinSdk.PvZGW2/Core/SmartRef.h>
#include <IcelinSdk.PvZGW2/IO/Buffer.h>
#include <IcelinSdk.PvZGW2/IO/BundleBufferRef.h>
#include <IcelinSdk.PvZGW2/IO/BundleHelper.h>
#include <IcelinSdk.PvZGW2/IO/FsBackend.h>
#include <IcelinSdk.PvZGW2/IO/MediaHint.h>
#include <IcelinSdk.PvZGW2/IO/VirtualFileSystem.h>
#include <IcelinSdk.PvZGW2/Memory/MemoryArena.h>
#include <IcelinSdk.PvZGW2/Memory/StackAllocator.h>
#include <IcelinSdk.PvZGW2/Synchronization/CriticalSection.h>
#include <IcelinSdk.PvZGW2/Utilities/HashString.h>
#include <IcelinSdk.PvZGW2/Utilities/StringCompare.h>

#include <EASTL/hash_map.h>
#include <EASTL/string.h>
#include <EASTL/vector.h>

namespace fb
{

class SuperBundleManager {
private:
  MemoryArena &m_arena;
  StackAllocator m_alloc;

  eastl::vector<const char *> m_superbundles;
  eastl::vector<u8> m_superLevelMask;
  eastl::vector<u8> m_superState;

  int m_levelCount;
  u32 m_heapOpNo;
  u32 m_baseOpNo;

  bool m_faultTolerable;
  eastl::string m_prefix;

public:
  virtual ~SuperBundleManager() = 0;

  virtual void mount(const char *superBundleName, MediaHint hint) = 0;
  virtual void unmount(const char *superbundleName) = 0;

  virtual void addManifest(const char *path) = 0;
  virtual void addSuperbundlePath(const char *path) = 0;

  virtual MediaHint mediaHint(const fb::Guid &guid) = 0;

  virtual FsBackend *getBundleBackend() = 0;
  virtual FsBackend *getChunkBackend() = 0;
  virtual FsBackend *getFileBackend() = 0;
  virtual FsBackend *getPatchBackend() = 0;
};

/* There seems to be (at least in GW2) one implementation of `SuperBundleManager`, so we'll place it
   here.
*/
class FileSuperBundleManager : public SuperBundleManager {
private:
  class ByteRange {
  private:
    u32 m_offsetHighAndFileIndex;
    u32 m_offsetLow;
    u32 m_size;
  };

  struct BundleInfo {
    ByteRange baseByteRange;
    ByteRange deltaByteRange;
  };

  struct SuperBundleEntry {
    typedef eastl::hash_map<Guid, ByteRange> ChunkLocMap_t;
    typedef eastl::hash_map<Guid, SHA1> ChunkSha1Map_t;
    typedef eastl::hash_map<eastl::string, BundleInfo, HashStringNoCase, NoCaseStringEquals> BundleMap_t;

    u32 refCount;
    bool casMode;
    MediaHint mediaHint;

    Buffer *file[2];

    ChunkLocMap_t superBundleChunks;

    /* This seems to be exclusively used by cas, so we shouldn't have to worry about it for GW2. */
    ChunkSha1Map_t chunkChecksums;

    BundleMap_t bundles;
  };

  struct CatEntry {
    SHA1 sha1;
    u32 fileOffset;
    u32 size;
    u32 rangeStart;
  };

  struct CasData {
    Buffer *baseBuffer;
    Buffer *deltaBuffer;
  };

  typedef eastl::vector<CasData> CasDataVector_t;
  typedef eastl::vector<CatEntry> CatEntryVector_t;

  typedef eastl::vector<const char *> CstrVector_t;
  typedef eastl::hash_map<int, SuperBundleEntry> TocMap_t;

  const VirtualFileSystem *m_vfs;

  SmartRef<FsBackend> m_bundleBackend;
  SmartRef<FsBackend> m_chunkBackend;
  SmartRef<FsBackend> m_fileBackend;
  SmartRef<FsBackend> m_patchBackend;

  mutable CriticalSection m_csec;

  /* It's likely that the key for this map is some `typedef` for int, but we can't really tell at the
     moment.
  */
  TocMap_t m_tocs;

  CstrVector_t m_roots;
  CstrVector_t m_manifests;

  /* TODO: Figure out why Fb specifically stores two of these. It's definitely an array of them based
     on some `for` loops and it using an `eh vector constructor iterator`.
  */
  CatEntryVector_t m_catEntries[2];
  CasDataVector_t m_casData[2];

  BundleHelper *m_bundleHelper;
  BundleBufferRef m_sharedData[2];

  CstrVector_t m_additionalPaths;
  bool m_initialized;
};

}
