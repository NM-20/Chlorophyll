#pragma once

/** @brief Provides the declaration for the `TurboSegment` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

#include <cstdint>

namespace fb
{

struct TurboSegmentHeader {
  union {
    u8 data[8];
    struct {
      u32 compressedSize;

      u32 uncompressedSize : 24;
      u32 method           : 8;
    };
  };
};

struct TurboSegment {
  uintptr_t ea[2];
  uintptr_t patchEa[2];
  u32 size[2];
  u32 patchSize[2];
  u32 compressedSize;
  u32 realUncompressedSize;
  u32 logicalUncompressedSize;
  u32 skipOffset;
  u8 method;

  /* TODO: Is `methodData` (u8) in Fb 2014? It's a bit hard to tell, as the
     only writer to `method` sets a quadword.
  */
};

}
