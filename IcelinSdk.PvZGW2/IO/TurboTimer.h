#pragma once

/** @brief Provides the declaration for the `TurboTimer` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

namespace fb
{

struct TurboTimer {
  u64 start;
  u64 deadline;
  u64 frequency;
  double frequencyDbl;
};

}
