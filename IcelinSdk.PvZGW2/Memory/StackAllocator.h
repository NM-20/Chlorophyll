#pragma once

/** @brief Provides the declaration for the `StackAllocator` class. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Memory/MemoryArena.h>

namespace fb
{

class StackAllocator {
  struct alignas(16) StackChunk {
    StackChunk *prevChunk;
    u32 chunkSize;
    u32 allocOffset;
  };

  class CheckPoint {
    CheckPoint *link;
    CheckPoint *chunk;
    u32 offset;
  };

  MemoryArena &m_arena;

  StackChunk *m_topChunk;
  CheckPoint *m_checkPoints;

  u32 m_blockSize;
};

}
