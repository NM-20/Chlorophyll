#pragma once

/** @brief Provides the declaration for the `BundleManifest` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Core/Guid.h>
#include <IcelinSdk.PvZGW2/Core/ResourceRef.h>
#include <IcelinSdk.PvZGW2/Core/SHA1.h>
#include <IcelinSdk.PvZGW2/IO/ResourceBulkHeader.h>

namespace fb
{

struct BundleManifest {
  struct Header {
    u32 magic;
    u32 entryCount;
    u32 dbxCount;
    u32 resourceCount;
    u32 chunkCount;
    u32 stringBlockOffset;
    u32 chunkMetaOffset;
    u32 chunkMetaSize;
  };

  struct EntryRecord {
    u32 nameOffset;
    u32 originalSize;
  };

  struct ChunkInfo {
    Guid guid;
    u32 logicalOffset;
    u32 logicalSize;
  };

  Header *header;
  SHA1 *hashBase;
  EntryRecord *records;
  u32 *resourceTypeHash;
  ResourceRef::RidType *resourceId;
  ResourceBulkHeader *resourceMeta;
  ChunkInfo *chunks;
  const void *chunkMeta;
  const void *textBlock;
  bool ebxMode;
};

}
