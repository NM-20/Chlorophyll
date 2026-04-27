#pragma once

/** @brief Provides the declaration for the `PropertyModificationQueue` class. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Core/ArrayDefinitions.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/SegmentedLinearAllocator.h>

namespace fb
{

class PropertyModificationQueue {
public:
  struct Entry {
    u8 type;
    u8 notUsed1;
    u8 notUsed2;
    u8 notUsed3;
    void *notUsed4;
    void *notUsed5;
  };

protected:
  typedef FixedSegmentedArray<Entry, 256, 128, 2> Entries;
  typedef FixedSegmentedLinearAllocator<1024, 128, 6> EntryData;

  Entries m_entries;
  EntryData m_data;
  Realm m_realm;
  bool m_callListeners;
  char pad_5035[0x000B];
};

}