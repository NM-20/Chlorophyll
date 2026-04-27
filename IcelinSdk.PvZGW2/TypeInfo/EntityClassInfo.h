#pragma once

/** @brief Provides the declaration for the `EntityClassInfo` class. */

#include <IcelinSdk.PvZGW2/Entity/EntityDestroyer.h>
#include <IcelinSdk.PvZGW2/TypeInfo/ClassInfo.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Entity/EntityIterableLink.h>

namespace fb
{

class EntityClassInfo : public ClassInfo {
public:
  /* Compared to other `TypeInfo`-based classes, an `InfoData` does not
     exist here.
  */
  mutable EntityDestroyer   *destroyer[Realm_Count];
  mutable EntityIterableLink firstIterableLink[Realm_Count];
  mutable EntityIterableLink firstTrackedLink[Realm_Count];
};

}