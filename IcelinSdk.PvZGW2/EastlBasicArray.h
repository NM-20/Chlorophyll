#pragma once

/** @brief Provides the declaration for the `eastl::basic_array<T>` class and its related types. */

#include <EASTL/internal/config.h>

namespace eastl
{

struct BasicArrayRoot {
  enum {
    kSizeIndex = -1
  };
};

template<typename T>
class basic_array : public BasicArrayRoot {
private:
  typedef EASTLAllocatorType allocator_type;
  typedef eastl_size_t       size_type;
  typedef ptrdiff_t          difference_type;

protected:
  T *mpBegin;

public:
  typedef const T *const_iterator; 
  typedef T        value_type;
  typedef T       *pointer;
  typedef const T *const_pointer;
  typedef T       &reference;
  typedef T       *iterator;       
  typedef const T &const_reference;

  /* TODO: Implement this type more thoroughly, taking care to ensure it feels like a proper EASTL
     implementation.
  */
};

}
