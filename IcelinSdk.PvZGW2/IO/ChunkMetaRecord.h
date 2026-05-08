#pragma once

/** @brief Provides the declaration for the `ChunkMetaRecord` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

namespace fb
{

struct ChunkMetaRecord {
  u32 resourceNameHash;
  const void *objectPtr;
};

}
