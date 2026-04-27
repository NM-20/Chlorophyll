#pragma once

/** @brief Provides the declaration for the `fb::eastl_arena_allocator` structure. */

#include <IcelinSdk.PvZGW2/MemoryArena.h>

namespace fb
{

struct eastl_arena_allocator {
  /* This is essentially a mediator between Frostbite and `eastl`; it is an interface
     to a `MemoryArena`.
     TODO: We should implement the `MemoryArena` wrapper functionality here ourselves.
  */
  MemoryArena *arena;
};

}