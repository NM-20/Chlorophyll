#pragma once

/** @brief Provides the declaration for the `WellKnownNamedAssetInfo` structure. */

#include <IcelinSdk.PvZGW2/TypeInfo/BaseTypeInfo.h>

#include <EASTL/string.h>

namespace fb
{

struct WellKnownNamedAssetInfo {
  const TypeInfo *type;
  eastl::string target;
};

}
