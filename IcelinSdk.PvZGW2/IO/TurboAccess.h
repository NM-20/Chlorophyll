#pragma once

/** @brief Provides the declaration for the `TurboAccess` structure. */

#include <IcelinSdk.PvZGW2/SharedTypedefs.h>
#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

namespace fb
{

struct TurboAccess {
  StreamSize position;
  u8 *base;
  u32 offset;
  u32 size;
};

}
