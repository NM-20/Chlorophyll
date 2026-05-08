#pragma once

/** @brief Provides the declaration for the `TurboRota` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Core/IResourceObject.h>
#include <IcelinSdk.PvZGW2/IO/ResourceHandle.h>
#include <IcelinSdk.PvZGW2/IO/TurboBulkInfo.h>
#include <IcelinSdk.PvZGW2/IO/TurboChunkInfo.h>
#include <IcelinSdk.PvZGW2/IO/TurboLoadRange.h>

namespace fb
{

struct TurboRota {
  union AbortInOut {
    u32 packed;
    struct {
      u32 inCount  : 16;
      u32 outCount : 15;
      u32 aborted  : 1;
    };
  };

  u32 resourceTypeIndex;
  u32 resourceTypeCount;
  u32 bulkCount;
  u32 rangeIndex;
  u32 rangeCount;
  u32 serviceOffset;
  u32 ackChunkCursor;
  u32 chunkCursor;
  u32 chunkCount;
  AbortInOut chunksAbortInOut;
  u32 *resourceTypes;
  TurboBulkInfo *bulkInfo;
  TurboLoadRange *ranges;
  const char **rangeDebugTags;
  ResourceHandle **handles;
  IResourceObject **objects;
  u32 *sizes;
  const char **names;
  TurboChunkInfo *chunks;
  u8 *chunkStatus;
  char pad_0078[0x0010];
};

}
