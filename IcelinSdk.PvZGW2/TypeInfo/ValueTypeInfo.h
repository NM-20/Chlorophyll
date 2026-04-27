#pragma once

/** @brief Provides the declaration for the `ValueTypeInfo` class. */

#include <IcelinSdk.PvZGW2/TypeInfo/BaseTypeInfo.h>
#include <IcelinSdk.PvZGW2/TypeInfo/FieldInfo.h>

namespace fb
{

/* This is never actually defined; it is purely to make it clear that
   the pointed value belongs to a `ValueTypeInfo`.
*/
struct ValueTypeDefaultValue;

class ValueTypeInfo : public TypeInfo {
public:
  struct ValueTypeInfoData {
    TypeInfo::TypeInfoData          tid;
    const ValueTypeDefaultValue    *defaultValue;
    const FieldInfo::FieldInfoData *fieldInfos;
  };

  /* Beyond the `InfoData`, `ValueTypeInfo` does not hold members. */
};

}
