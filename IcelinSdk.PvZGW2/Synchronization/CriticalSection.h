#pragma once

/** @brief Provides the declaration for the `CriticalSection` class. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Utilities/Noncopyable.h>

#include <eathread/eathread_futex.h>

namespace fb
{

class alignas(16) CriticalSection : Noncopyable {
protected:
  u8 m_data[sizeof(EA::Thread::Futex)];
};

}
