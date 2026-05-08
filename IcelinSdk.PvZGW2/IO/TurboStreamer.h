#pragma once

/** @brief Provides the declaration for the `TurboStreamer` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/IO/TurboData.h>
#include <IcelinSdk.PvZGW2/IO/TurboQueue.h>
#include <IcelinSdk.PvZGW2/IO/TurboReader.h>
#include <IcelinSdk.PvZGW2/IO/TurboRota.h>
#include <IcelinSdk.PvZGW2/IO/TurboScatter.h>
#include <IcelinSdk.PvZGW2/Jobs/JobInstanceHandle.h>
#include <IcelinSdk.PvZGW2/Memory/MemoryArena.h>

#include <cstdint>

namespace fb
{

enum TurboStreamerId {
  kTurboStreamerId_bundle  = 0,
  kTurboStreamerId_chunk   = 1,
  kTurboStreamerId_invalid = 2,
};

struct TurboStreamerInitParams {
  TurboReaderInitParams readerInitParams;
  uintptr_t *turboMemoryAddr;
  MemoryArena *memoryArena;
  TurboStreamerId sid;
  bool bundleLoading;
};

struct alignas(128) TurboStreamer {
  TurboQueue queue;
  TurboReader reader;
  TurboData data;
  TurboRota rota;
  TurboScatter scatter;
  TurboStreamerId sid;
  u32 ioLane;
  u32 flags;
  u32 smallBundleSizeForBoostedSyncUnpacking;
  EA::Jobs::JobInstanceHandle updateJob;
};

}
