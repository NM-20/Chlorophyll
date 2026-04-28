#pragma once

/** @brief Provides the declaration for the `TurboPatchCompressedSegmentOp` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

namespace fb
{

struct TurboPatchCompressedSegmentOp {
  u16 srcUncompressedOffset;
  u16 srcUncompressedSize;
};

}
