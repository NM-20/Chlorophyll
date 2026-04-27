#pragma once

/** @brief Provides the declaration for the `LateConstructed<T>` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

namespace fb
{

template <typename T>
struct alignas(16) LateConstructed {
  alignas(16) u8 buffer[sizeof(T)];
};

}
