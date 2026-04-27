#pragma once

/** @brief Provides the declaration for the `EntityIterableLink` structure. */

namespace fb
{

struct EntityIterableLink {
  EntityIterableLink *next;
  EntityIterableLink *prev;
};

}
