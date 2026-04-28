#pragma once

/** @brief Provides the declaration for the `TurboPatchType` enumeration. */

namespace fb
{

enum TurboPatchType {
  TurboPatchType_None                = 0,
  TurboPatchType_CompressedSegment   = 1,
  TurboPatchType_DecompressedSegment = 2,
  TurboPatchType_New                 = 3,
  TurboPatchType_Remove              = 4,
  TurboPatchType_Count               = 5,
};

}
