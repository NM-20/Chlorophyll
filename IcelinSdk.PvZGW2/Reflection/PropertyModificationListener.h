#pragma once

/** @brief Provides the declaration for the `PropertyModificationListener` class. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Reflection/PropertyModification.h>
#include <IcelinSdk.PvZGW2/TypeInfo/ITypedObject.h>

namespace fb
{

typedef s32 PropertyId;

class PropertyModificationListener : public ITypedObject {
protected:
  struct ParentChangesLink {
    ParentChangesLink *next;
    ParentChangesLink *prev;

    /* Address of `ParentChangesLink` - address of `PropertyModificationListener`. */
    u32 offsetToOwner;
    char pad_0014[0x0004];
  };

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(ParentChangesLink);

public:
  virtual void propertyChanged(const PropertyModification &modification);
  virtual void refreshCachedPropertyReader(PropertyId name);

protected:
  /* This seems to have been introduced starting in FB 2014; other games do not seem
   * to use it.
  */
  virtual ParentChangesLink *getParentChangesLink() const;
};

}
