#pragma once

/** @brief Provides the declaration for the `TurboReader` structure. */

#include <IcelinSdk.PvZGW2/CriticalSection.h>
#include <IcelinSdk.PvZGW2/LateConstructed.h>
#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/IO/IoService.h>
#include <IcelinSdk.PvZGW2/IO/TurboBuffer.h>
#include <IcelinSdk.PvZGW2/IO/TurboPriority.h>

namespace fb
{

enum {
  kIo_maxBufferCount = kTurboBuffer_maxCount,
};

struct TurboReaderJobData {
  struct IoBufferInfo {
    IoService *io;
    void *buffers[kIo_maxBufferCount];
    u32 count;
    u32 lane;
  };

  IoBufferInfo ioBufferInfos[2];
};

struct TurboReader {
  TurboReaderJobData jobData;
  alignas(16) LateConstructed<CriticalSection> lock;

  TurboRequest *request;

  u16 seqnos[kTurboPriorityCount];
  u16 prevnos[kTurboPriorityCount];

  /* TODO: Figure out the bitfields here. */
  u32 pad : 32;
};

}
