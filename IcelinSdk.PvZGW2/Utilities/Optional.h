#pragma once

/** @brief Provides the declaration for the `Optional` class. */

#include <IcelinSdk.PvZGW2/Utilities/AlignedStorage.h>

namespace fb
{

template<class T>
class Optional {
private:
  AlignedStorage<T> m_storage;
  bool m_initialized;
};

}
