#pragma once

/** @brief Provides the declaration for the `ScatterReadItem` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

namespace fb
{

struct ScatterReadItem {
  void *buffer;
  u32 offset;
  u32 rangeSize;
  u32 rangeCount;
  u32 rangeStride;
};

}
