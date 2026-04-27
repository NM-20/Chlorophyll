#pragma once

/** @brief Provides the declaration for the `EnumTypeInfo` class. */

#include <IcelinSdk.PvZGW2/TypeInfo/BaseTypeInfo.h>
#include <IcelinSdk.PvZGW2/TypeInfo/FieldInfo.h>

namespace fb
{

class EnumTypeInfo : public TypeInfo {
public:
  struct EnumTypeInfoData {
    TypeInfo::TypeInfoData          tid;
    const FieldInfo::FieldInfoData *fieldInfos;
  };
};

}
