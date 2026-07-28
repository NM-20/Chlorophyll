#pragma once

/** @brief Provides the declaration for the `ResourceSystemSync` structure. */

#include <IcelinSdk.PvZGW2/Synchronization/CriticalSection.h>

namespace fb
{

struct ResourceSystemSync {
  CriticalSection *lock;
  int outstandingSystems;
};

}
