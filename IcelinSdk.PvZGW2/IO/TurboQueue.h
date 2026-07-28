#pragma once

/** @brief Provides the declaration for the `TurboQueue` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Core/Guid.h>
#include <IcelinSdk.PvZGW2/IO/IoLane.h>
#include <IcelinSdk.PvZGW2/IO/IoService.h>
#include <IcelinSdk.PvZGW2/IO/ScatterReadItem.h>
#include <IcelinSdk.PvZGW2/IO/TurboConstants.h>
#include <IcelinSdk.PvZGW2/IO/TurboPriority.h>
#include <IcelinSdk.PvZGW2/Memory/MemoryArena.h>
#include <IcelinSdk.PvZGW2/Synchronization/CriticalSection.h>
#include <IcelinSdk.PvZGW2/Utilities/LateConstructed.h>

#include <cstdint>
#include <EASTL/hash_map.h>

namespace fb
{

typedef eastl::hash_map<u32, uintptr_t> TurboResultMap;

enum TurboRequestType {
  kTurboRequestType_bundle = 0,
  kTurboRequestType_chunk  = 1,
  kTurboRequestType_patch  = 2,
  kTurboRequestType_clear  = 3,
  kTurboRequestTypeCount   = 4,
};

struct TurboRequest {
  u16 seqno;
  u8 pri;
  u8 flags;
  TurboRequestType type;
  u32 primedDataIndex;
  u32 dataIndex;
  u32 count;
  u32 cid;
  IoTaskHandle ioTask;
  IoTaskHandle patchIoTask;
  union {
    struct {
      char **bundles;
      u32 *filteredChunks;
      u32 filteredChunkCount;
    } bundleSet;
    
    struct {
      Guid *guid;
      ScatterReadItem *items;
      u32 count;

      /* TODO: There's seemingly two extra fields for `chunk`.
         No idea what they correspond to at the moment, so look
         into it.
      */
      char pad_0038[0x0008];
    } chunk;

    struct {
      void *blob;
      u32 size;
    } patch;
  };
};

struct TurboQueueJobData {
  TurboRequest *removeReqs[kTurboQueue_maxPendingRemoveRequests];
  u32 removeReqCount;
  u16 prevSeqnos[kTurboPriorityCount];
};

enum TurboQueueFlag {
  kTurboQueueFlag_suspend        = 1,
  kTurboQueueFlag_primingAllowed = 2,
};

struct TurboRequestList {
  TurboRequestList *prev;
  TurboRequestList *next;
  u32 index;
  u32 count;
  TurboRequest *reqs[1];
};

struct TurboPrimedRequest {
  TurboRequest *request;
  IoTaskHandle ioTask;
  IoTaskHandle patchIoTask;
};

struct TurboQueue {
  LateConstructed<CriticalSection> lock;
  LateConstructed<TurboResultMap> results;

  MemoryArena *arena;

  TurboQueueJobData jobData;

  u16 prevSeqnos[kTurboPriorityCount];
  u16 seqnos[kTurboPriorityCount];

  u32 count;
  u8 flags;

  TurboRequestList lists[kTurboPriorityCount];

  TurboPrimedRequest primedRequests[kIo_maxTaskSlotCount - 1];
  u32 primedIndex;
  u32 primedCount;
};

}
