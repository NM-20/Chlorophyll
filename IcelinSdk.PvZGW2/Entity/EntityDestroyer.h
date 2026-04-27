#pragma once

/** @brief Provides the declaration for the `EntityDestroyer` class. */

#include <IcelinSdk.PvZGW2/Entity/EntityBusPeer.h>

namespace fb
{

class EntityDestroyer {
public:
  virtual void destroy(EntityBusPeer *entity) = 0;
};

}