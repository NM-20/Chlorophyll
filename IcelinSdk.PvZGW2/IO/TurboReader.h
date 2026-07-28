#pragma once

/** @brief Provides the declaration for the `TurboReader` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/IO/BundlePatchManifest.h>
#include <IcelinSdk.PvZGW2/IO/IoService.h>
#include <IcelinSdk.PvZGW2/IO/TurboBuffer.h>
#include <IcelinSdk.PvZGW2/IO/TurboPriority.h>
#include <IcelinSdk.PvZGW2/IO/TurboManifest.h>
#include <IcelinSdk.PvZGW2/IO/TurboMux.h>
#include <IcelinSdk.PvZGW2/Synchronization/CriticalSection.h>
#include <IcelinSdk.PvZGW2/Utilities/LateConstructed.h>

namespace fb
{

struct TurboReaderInitParams {
  IoService *io;
  u32 ioLane;
  IoService *patchIo;
  u32 patchIoLane;
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

  TurboBufferState state;

  u32 doneReading    : 1;
  u32 handshake      : 1;
  u32 hasPatchBuffer : 1;
  u32 pad            : 29;

  TurboManifest manifest;
  BundlePatchManifest patchManifest;

  TurboBuffer buffer;
  TurboBuffer patchBuffer;

  TurboMux mux;
};

}
