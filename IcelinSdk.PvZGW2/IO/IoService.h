#pragma once

/** @brief Provides the declaration for the `IoService` structure and all related types. */

#include <IcelinSdk.PvZGW2/LateConstructed.h>
#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Core/Thread.h>
#include <IcelinSdk.PvZGW2/IO/IoLane.h>
#include <IcelinSdk.PvZGW2/IO/TurboConstants.h>
#include <IcelinSdk.PvZGW2/Memory/MemoryArena.h>

#include <eathread/eathread_condition.h>
#include <eathread/eathread_mutex.h>
#include <eathread/eathread_futex.h>

namespace fb
{

/* Forward declaration for params. */
struct IoService;

typedef u32 IoTaskHandle;

enum IoServiceCallbackReason {
  IoServiceCallbackReason_NoTasksInEitherLane = 0,
  IoServiceCallbackReason_NoTasksInActiveLane = 1,
};

struct IoServiceCallbackParams {
  IoService *io;
  void *userData;
  u32 streamerId;
  u32 laneIndex;
  u32 canScheduleTask[2];
  IoServiceCallbackReason reason;
};

struct IoServiceCallbackResult {
};

typedef void (*IoServiceCallback)(
  const IoServiceCallbackParams &reason, 
  IoServiceCallbackResult &outResult);

struct IoServiceInitParams {
  const char *name;
  MemoryArena *arena;
  u32 bufferSize;
  u32 streamerIds[2];
  u32 laneBufferReservations[2];
  IoServiceCallback callback;
  void *callbackUserData;
  bool autoLaneSwitching;
};

struct IoService {
  MemoryArena *arena;
  alignas(16) LateConstructed<EA::Thread::Mutex> mutex;

  LateConstructed<EA::Thread::Condition> serviceWakeUpCond;
  LateConstructed<EA::Thread::Condition> bufferAvailableCond;
  LateConstructed<EA::Thread::Futex> taskMutex;
  LateConstructed<Thread> thread;

  const char *name;
  bool quit;
  bool autoLaneSwitching;

  u32 bufferCount;
  u32 bufferSize;

  /* `kTurboBuffer_maxCount` was calculated by taking the distance between AFTER `bufferSize` and
     BEFORE `laneIndex`, then dividing that by `sizeof(void *)`.
  */
  void *buffers[kTurboBuffer_maxCount];

  u32 laneIndex;
  IoLane lanes[2];
  u32 streamerIds[2];

  IoServiceCallback callback;
  void *callbackUserData;
};

}
