#pragma once

/** @brief Provides the declaration for the `TurboMux` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/IO/TurboPatchState.h>
#include <IcelinSdk.PvZGW2/IO/TurboPatchType.h>
#include <IcelinSdk.PvZGW2/IO/TurboPatchCompressedSegmentOp.h>
#include <IcelinSdk.PvZGW2/IO/TurboSegment.h>

namespace fb
{

struct TurboMux {
  TurboSegmentHeader segmentHeader;
  TurboSegment segment;
  TurboSegmentHeader patchSegmentHeader;
  TurboSegment patchSegment;

  u32 segmentHeaderRead         : 1;
  u32 patchSegmentHeaderRead    : 1;
  u32 patchedSegmentLengthRead  : 1;
  u32 compressedSegmentOpRead   : 1;
  u32 compressedSegmentServeEnd : 1;

  TurboPatchState patchState;

  u32 patchManifestDataToRead;
  u32 patchEntryDataToRead;

  u32 manifestReadCount;
  u32 manifestSkipCount;
  u32 logicalManifestOffset;
  u32 origManifestDataRemaining;

  TurboPatchType patchOpType;
  u32 patchOpLength;
  u32 patchedSegmentLength;

  u32 compressedSegmentSkipOffset;
  TurboPatchCompressedSegmentOp compressedSegmentOp;
};

}
