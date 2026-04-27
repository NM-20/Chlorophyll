#pragma once

/** @brief Provides the declaration for the `EntityOwner` class. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Entity/EntityOwnerLink.h>
#include <IcelinSdk.PvZGW2/Network/Ghost.h>
#include <IcelinSdk.PvZGW2/Core/SmartRef.h>
#include <IcelinSdk.PvZGW2/GameShared/SubLevel.h>

#include <stdint.h>

namespace fb
{

class EntityOwner : public EntityOwnerLink {
private:
  SmartRef<EntityOwner> m_parent;
  EntityOwner *m_firstChild;
  EntityOwner *m_nextSibling;
  uintptr_t m_prevSibling;
  SubLevel &m_subLevel;
  Ghost *m_ghost;
  mutable volatile u32 m_refCount;
  char pad_0044[0x0004];
};

}