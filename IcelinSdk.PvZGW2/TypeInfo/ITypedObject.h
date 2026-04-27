#pragma once

/** @brief Provides the declaration for the `ITypedObject` interface and its variations. */

#include <IcelinSdk.PvZGW2/TypeInfo/BaseTypeInfo.h>

namespace fb
{

struct ITypedObject {
  virtual const TypeInfo *getType() const = 0;
};

/* Certain types do not implement `ITypedObject` directly, but rather implement a variation
   of it named `ITypedObjectWithRefCount`.
*/
struct ITypedObjectWithRefCount : public ITypedObject {
  virtual int addRef()  = 0;
  virtual int release() = 0;
};

}
