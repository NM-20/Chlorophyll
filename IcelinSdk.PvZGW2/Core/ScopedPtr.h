#pragma once

/** @brief Provides the declaration for the `ScopedPtr<T>` class. */

#include <EASTL/scoped_ptr.h>

namespace fb
{

template<typename T>
class ScopedPtr {
private:
  eastl::scoped_ptr<T> m_ptr;
};
  
}
