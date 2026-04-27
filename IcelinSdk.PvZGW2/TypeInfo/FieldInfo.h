#pragma once

/** @brief Provides the declaration for the `FieldInfo` class and the `FieldInfoData` structure. */

#include <IcelinSdk.PvZGW2/TypeInfo/MemberInfo.h>
#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/TypeInfo/BaseTypeInfo.h>

namespace fb
{

/* `FieldInfo` is actually excluded in Retail; we include it purely to parent `FieldInfoData` to it
   for accuracy.
*/
class FieldInfo : public MemberInfo {
public:
  struct FieldInfoData {
    /* As with other `InfoData` implementations, there's zero inheritance; fields are redefined. */
    const char     *name;
    MemberInfoFlags flags;
    u16             fieldOffset;
    char            pad_000C[0x0004];
    const TypeInfo *fieldTypePtr;
  };
};

}
