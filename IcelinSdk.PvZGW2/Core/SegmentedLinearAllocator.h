#pragma once

/** @brief Provides the declaration for the `SegmentedLinearAllocator` class and all related types. */

#include <IcelinSdk.PvZGW2/MemoryArena.h>
#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

namespace fb
{

class SegmentedLinearAllocator {
private:
  MemoryArena &m_arena;
  u8 **m_segments;
  u32 m_fixedSegmentCount;
  u32 m_maxSegmentCount;
  u32 m_segmentSize;
  u32 m_usedMemory;
};

template<u32 SegmentSize, u32 MaxSegmentCount, u32 FixedSegmentCount = 0>
class FixedSegmentedLinearAllocator : public SegmentedLinearAllocator {
private:
  #pragma pack(push, 16)
  struct Segment {
    u8 data[SegmentSize];
  };
  #pragma pack(pop)

  u8 *m_segments[MaxSegmentCount];
  Segment m_fixedSegments[FixedSegmentCount];
};

}
