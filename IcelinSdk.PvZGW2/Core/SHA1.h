#pragma once

/** @brief Provides the declaration for the `SHA1` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

#include <EASTL/functional.h>

namespace fb
{

struct SHA1 {
  u8 hash[20];
};

}

namespace eastl
{

template<>
struct hash<fb::SHA1> {
};

}
