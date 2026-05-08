#pragma once

/** @brief Provides the declaration for the `TypeRemapInfo` structure. */

#include <IcelinSdk.PvZGW2/TypeInfo/BaseTypeInfo.h>

#include <EASTL/string.h>

namespace fb
{

struct TypeRemapInfo {
  const TypeInfo *type;
  eastl::string target;
};

}
