#pragma once

/** @brief Provides the declaration for the `TurboBuffer` structure and all related types. */

#include <IcelinSdk.PvZGW2/SharedTypedefs.h>
#include <IcelinSdk.PvZGW2/IO/Buffer.h>
#include <IcelinSdk.PvZGW2/IO/IoService.h>
#include <IcelinSdk.PvZGW2/IO/TurboAccess.h>
#include <IcelinSdk.PvZGW2/IO/TurboConstants.h>

namespace fb
{

enum TurboBufferState {
  kTurboBufferState_error = -1,
  kTurboBufferState_idle  = 0,
  kTurboBufferState_open  = 1,
  kTurboBufferState_read  = 2,
};

enum TurboBufferStatus {
  kTurboBufferStatus_drained = 0,
  kTurboBufferStatus_synced  = 1,
  kTurboBufferStatus_count   = 2,
};

struct TurboBuffer {
  TurboBufferState state; 
  IoService *io;
  u32 ioLane;
  IoTaskHandle ioTask;
  Buffer *input;
  StreamSize inputSize;
  StreamSize available;
  TurboAccess access;
  u32 index;
  u32 status[kTurboBufferStatus_count];
  u32 sizes[kIo_maxBufferCount];
  u8 *payload[kIo_maxBufferCount];
  
  /* Fb 2014 moves the padding after the `doneReading` bit, whereas older engine versions
     pad first.
  */
  u32 doneReading : 1;
  u32 pad : 31;
};
  
}
