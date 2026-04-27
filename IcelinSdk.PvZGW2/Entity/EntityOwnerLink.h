#pragma once

/** @brief Provides the declaration for the `EntityOwnerLink` structure. */

namespace fb
{

struct EntityOwnerLink {
  EntityOwnerLink *prev;
  EntityOwnerLink *next;
};

}
