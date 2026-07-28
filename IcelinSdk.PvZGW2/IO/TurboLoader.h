#pragma once

/** @brief Provides the declaration for the `TurboLoader` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/IO/Compartment.h>
#include <IcelinSdk.PvZGW2/IO/IoService.h>
#include <IcelinSdk.PvZGW2/IO/ResourceSystemSync.h>
#include <IcelinSdk.PvZGW2/IO/TurboServerSidePatcher.h>
#include <IcelinSdk.PvZGW2/IO/TurboStreamer.h>
#include <IcelinSdk.PvZGW2/IO/TurboTimer.h>
#include <IcelinSdk.PvZGW2/Jobs/JobInstanceHandle.h>
#include <IcelinSdk.PvZGW2/Memory/MemoryArena.h>
#include <IcelinSdk.PvZGW2/Synchronization/CriticalSection.h>
#include <IcelinSdk.PvZGW2/Utilities/LateConstructed.h>

namespace fb
{

struct alignas(128) TurboLoader {
  void *memory;
  ResourceManager::Compartment **compartments;

  MemoryArena *arena;
  u32 updated;
  u32 flags;
  EA::Jobs::JobInstanceHandle job;

  volatile u32 mode;
  u32 modeInertia;

  float boostedQuantumInMs;
  /* We could specify `CRITICAL_SECTION` instead, but this would not be
     as accurate.
  */
  alignas(16) LateConstructed<CriticalSection> lock;

  ResourceSystemSync sync;

  IoService mainIo;
  IoService patchIo;

  TurboTimer timer;

  alignas(128) TurboStreamer streamers[kTurboStreamer_count];

  TurboServerSidePatcher serverSidePatcher;
};

}
