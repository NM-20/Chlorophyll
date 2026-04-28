#pragma once

/** @brief Provides the declaration for the `TurboQueue` structure. */

#include <IcelinSdk.PvZGW2/CriticalSection.h>
#include <IcelinSdk.PvZGW2/LateConstructed.h>
#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/MemoryArena.h>
#include <IcelinSdk.PvZGW2/IO/IoLane.h>
#include <IcelinSdk.PvZGW2/IO/IoService.h>
#include <IcelinSdk.PvZGW2/IO/TurboConstants.h>
#include <IcelinSdk.PvZGW2/IO/TurboPriority.h>

#include <cstdint>
#include <EASTL/hash_map.h>

namespace fb
{

typedef eastl::hash_map<u32, uintptr_t> TurboResultMap;

struct TurboRequest {
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
