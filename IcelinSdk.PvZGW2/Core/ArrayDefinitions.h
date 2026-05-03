#pragma once

/** @brief Provides the declaration for various array types within Frostbite. */

#include <IcelinSdk.PvZGW2/EastlBasicArray.h>
#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Core/SmartHandle.h>
#include <IcelinSdk.PvZGW2/Memory/MemoryArena.h>

#include <EASTL/type_traits.h>

namespace fb
{

/* This array type doesn't include any layout information by itself, but we will
   include it regardless.
*/
struct ArrayBase
{};

/* TODO: Implement functionality more characteristic of an array, i.e iteration,
   etc.
*/
template<class T>
struct Array : public ArrayBase {
private:
  typedef eastl::basic_array<T> vector_t;

public:
  /* Frostbite exposes the internal vector publicly, so I guess we'll do the same
     with our implementation.
  */
  vector_t m_vec;
};

template<class T, template<class U> class RefT>
class RefArrayBase : public ArrayBase {
public:
  typedef typename RefT<T>::Base RefTBase;

protected:
  typedef eastl::basic_array<RefTBase> vector_t;

  /* Compared to `Array`, the internal vector is exposed only to derived classes,
     so we'll preserve that pattern.
  */
  vector_t m_vec;
};

template<class T>
using RefArray = RefArrayBase<T, SmartHandle>;

template<typename T, u32 SegmentSize>
class SegmentedArraySegment {
private:
  T m_data[SegmentSize];
};

template<typename T, u32 SegmentSize, u32 Padding>
class SegmentedArraySegmentWithPadding {
private:
  T m_data[SegmentSize];
  u8 m_padding[Padding];
};

template<typename T, u32 SegmentSize, u32 SegmentCount, u32 SegmentPadding = 0>
class SegmentedArray {
public:
  typedef eastl::conditional<SegmentPadding == 0, SegmentedArraySegment<T, SegmentSize>, SegmentedArraySegmentWithPadding<T, SegmentSize, SegmentPadding>>::type SegmentType;

  #pragma pack(push, 16)
  struct SegmentData {
    u8 data[sizeof(SegmentType)];
  };
  #pragma pack(pop)

protected:
  SegmentType *m_segments[SegmentCount];
  MemoryArena *m_arena;
  u32 m_size;
  
  /* For some reason, this is defined here instead of in `FixedSegmentArray`. */
  u32 m_fixedSegmentCount;
};

template<typename T, u32 SegmentSize, u32 SegmentCount, u32 FixedSegmentCount,
  u32 SegmentPadding = 0>
class FixedSegmentedArray : public SegmentedArray<T, SegmentSize, SegmentCount,
  SegmentPadding>
{
public:
  typedef SegmentedArray<T, SegmentSize, SegmentCount, SegmentPadding> BaseType;

private:
  typename BaseType::SegmentData m_fixedSegments[FixedSegmentCount];
};

}
