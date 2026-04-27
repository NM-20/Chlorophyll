#pragma once

/** @brief Provides the declaration for `WeakPtr` and all related types. */

#include <cstdint>

namespace fb
{

/* To achieve indirect references, Frostbite uses this as a base class with
   anything using `VfTable`s.
   By using this as the pointer type instead, the pointer will be offset by
   the size of a `VfTable`, providing an indirect reference.
*/
struct SupportsWeakPtr
{};

class WeakToken {
  mutable SupportsWeakPtr *m_realptr;
  mutable volatile int    *m_refcount;
  char                     pad_000C[0x0004];
};

/* TODO: Try to remember why Frostbite is using a base class here again. */
class WeakPtrBase {
protected:
  WeakToken *m_token;
};

template<typename T>
class WeakPtr : public WeakPtrBase {
public:
  typedef WeakPtrBase Base;

  /* TODO: This isn't currently suited for use in code injection; implement
     `WeakPtr` properly.
  */
};

template<class T>
using ConstWeakPtr = WeakPtr<const T>;

/* This isn't inherited from; rather, it is defined as a field within every
   `SupportsWeakPtr`-implementing class.
*/
class WeakTokenHolder {
private:
  mutable volatile uintptr_t m_token;
};

}
