#pragma once

/** @brief Provides the declaration for the `ArrayTypeInfo` class. */

#include <IcelinSdk.PvZGW2/TypeInfo/BaseTypeInfo.h>

namespace fb
{

class ArrayTypeInfo : public TypeInfo {
public:
  struct ArrayTypeInfoData {
    TypeInfo::TypeInfoData tid;
    const TypeInfo        *elementType;
  };
};

}
