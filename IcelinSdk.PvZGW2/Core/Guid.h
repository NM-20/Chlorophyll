#pragma once

/** @brief Provides the declaration for the `Guid` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

namespace fb
{

struct Guid {
  u32 data1;
  u16 data2;
  u16 data3;
  u8  data4[8];
};

}