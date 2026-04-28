#pragma once

/** @brief Provides the declaration for the `TurboEntry` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/IO/TurboSegment.h>

namespace fb
{

struct TurboEntry {
  bool hasSize;
  u32 dstSize;
  u32 unpackOffset;
  bool skipping;
  bool interrupted;
  TurboSegment seg;
};

}
