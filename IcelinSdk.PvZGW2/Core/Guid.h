#pragma once

/** @brief Provides the declaration for the `Guid` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

#include <EASTL/functional.h>

namespace fb
{

struct Guid {
  u32 data1;
  u16 data2;
  u16 data3;
  u8  data4[8];
};

}

namespace eastl
{

template<>
struct hash<fb::Guid> {
};

}