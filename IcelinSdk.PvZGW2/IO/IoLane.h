#pragma once

/** @brief Provides the declaration for the `IoLane` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/IO/IoReadFullFileTask.h>
#include <IcelinSdk.PvZGW2/IO/TurboConstants.h>

namespace fb
{

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
