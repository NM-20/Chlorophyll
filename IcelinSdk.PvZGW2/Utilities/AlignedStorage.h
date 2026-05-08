#pragma once

/** @brief Provides the declaration for the `AlignedStorage` class. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Utilities/Noncopyable.h>

namespace fb
{

template<u32>
struct AlignedType;

template<>
struct alignas(1) AlignedType<1> {
};

template<>
struct alignas(2) AlignedType<2> {
};

template<>
struct alignas(4) AlignedType<4> {
};

template<>
struct alignas(8) AlignedType<8> {
};

template<>
struct alignas(16) AlignedType<16> {
};

template<>
struct alignas(32) AlignedType<32> {
};

template<>
struct alignas(64) AlignedType<64> {
};

template<>
struct alignas(128) AlignedType<128> {
};

template<class T>
class AlignedStorage : private Noncopyable {
private:
  union {
    char data[sizeof(T)];
    AlignedType<alignof(T)> aligner;
  } m_data;
};

}
