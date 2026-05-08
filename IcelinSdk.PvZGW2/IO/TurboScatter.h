#pragma once

/** @brief Provides the declaration for the `TurboScatter` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

#include <cstdint>

namespace fb
{

struct TurboScatterSegment {
  uintptr_t srcEa[2];
  uintptr_t patchDataEa[2];
  u32 srcSize[2];
  u32 patchDataSize[2];
  u32 unpackSize;
  u32 paramIndex;
  u32 compressed  : 1;
  u32 multiSubOps : 1;
  u32 paramCount  : 22;
  u32 method      : 8;
};

struct TurboScatterParam {
  uintptr_t dstEa;
  u32 dstSize;
  u32 dstStride;
  u32 skipOffset;
  u32 count      : 16;
  u32 unusedBits : 16;
};

struct TurboScatterJobData {
  volatile u32 *segmentIndex;
  u32 *segmentCountEa;
  TurboScatterSegment *segments;
  TurboScatterParam *params;
  u32 segmentCount;
  u32 paramCount;
  u64 yieldAfterPerfCounterTicks;
};

enum TurboScatterStatus {
  kTurboScatterStatus_ready       = 0,
  kTurboScatterStatus_pending     = 1,
  kTurboScatterStatus_kicked      = 2,
  kTurboScatterStatus_synchronous = 3,
};

struct TurboScatter {
  TurboScatterJobData jobData;
  volatile u32 segmentIndex;
  TurboScatterStatus status;
  u32 flags;
};

}
