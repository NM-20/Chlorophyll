#pragma once

/** @brief Provides the declaration for the `EventAndPropertyModificationQueue` class. */

#include <IcelinSdk.PvZGW2/Reflection/PropertyModificationQueue.h>

#include <EASTL/fixed_list.h>
#include <FastDelegate/FastDelegate.h>

namespace fb
{

class EventAndPropertyModificationQueue : public PropertyModificationQueue {
public:
  typedef FastDelegate<void()> PostFlushEvent;

private:
  typedef eastl::fixed_list<PostFlushEvent, 8> PostFlushEvents;

  PostFlushEvents m_postFlushEvents;
  bool m_flushInProgress;

  /* TODO: Does `EventAndPropertyModificationQueue` use a class alignment of 16 bytes? */
  char pad_51A9[0x0007];
};
  
}
