#pragma once

/** @brief Provides the declaration for the `ResourceRef` class. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/PaddedPtrBase.h>
#include <IcelinSdk.PvZGW2/Core/IResourceObject.h>

namespace fb
{

class ResourceRef {
private:
  template<typename T>
  struct PaddedPtr : PaddedPtrBase<sizeof(T)> {
    T value;
  };

public:
  typedef u64              RidType;
  typedef IResourceObject *ObjType;

protected:
  union Content {
    /* x86_64 doesn't require any padding, so this'll be an 8-byte pointer. */
    PaddedPtr<ObjType> object;

    /* As far as I can tell, `Content` is only `rid` when it's from serialized
       data. Otherwise, it will always be a pointer in-game.
       TODO: We need to verify that this is genuinely how `ResourceRef` works.
    */
    RidType rid;
  };

  Content m_content;
};

/* Just to be safe, we'll include a `static_assert` here to ensure the size is
   correct.
*/
static_assert(sizeof(ResourceRef) == sizeof(u64));

}
