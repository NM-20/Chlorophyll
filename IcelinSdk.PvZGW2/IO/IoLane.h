#pragma once

/** @brief Provides the declaration for the `IoLane` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/IO/IoReadFullFileTask.h>

namespace fb
{

enum {
  kIo_maxTaskSlotCount = 8,
};

struct IoLane {
  u32 workingTaskIndex;
  u32 scheduledTaskIndex;
  u32 scheduledTaskCount;
  u32 completedTaskCount;

  IoReadFullFileTask tasks[kIo_maxTaskSlotCount];

  u32 reservedBufferCount;
  u32 buffersInUseCount;
};

}
