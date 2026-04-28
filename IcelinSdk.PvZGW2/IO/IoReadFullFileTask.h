#pragma once

/** @brief Provides the declaration for the `IoReadFullFileTask` structure. */

#include <IcelinSdk.PvZGW2/SharedTypedefs.h>
#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/IO/Buffer.h>
#include <IcelinSdk.PvZGW2/IO/TurboConstants.h>

namespace fb
{

enum {
  Io_maxBufferCount = kTurboBuffer_maxCount,
};

enum IoReadFullFileState {
  IoReadFullFileState_Open       = 0,
  IoReadFullFileState_Read       = 1,
  IoReadFullFileState_Completed  = 2,
  IoReadFullFileState_Cancelled  = 3,
  IoReadFullFileState_Error_Open = 4,
  IoReadFullFileState_Error_Read = 5,
};

struct IoReadFullFileTask {
  struct ReadTask {
    void *buffer;
    u32 size;
  };

  Buffer *file;
  const char *filePath;

  StreamSize byteCount;
  StreamSize byteCountAvailable;
  u32 fileOpenFlags;
  IoReadFullFileState state;

  u32 readTaskIndex;
  u32 readTaskCompletedCount;

  ReadTask readTasks[Io_maxBufferCount];

  volatile u32 cancelled;
};

}
