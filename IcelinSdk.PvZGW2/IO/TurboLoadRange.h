#pragma once

/** @brief Provides the declaration for the `TurboLoadRange` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

namespace fb
{

struct TurboLoadRange {
  void *dstEa;
  u32 resourceIndex;
  u32 fileOffset;
  u32 dstSize;
  u32 readSize;
  u32 count;
  u32 dstStride;
  u32 dstOffset;
};

}
