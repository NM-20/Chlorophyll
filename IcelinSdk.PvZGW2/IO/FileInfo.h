#pragma once

/** @brief Provides the declaration for the `FileInfo` structure. */

#include <IcelinSdk.PvZGW2/SharedTypedefs.h>
#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

namespace fb
{

struct FileInfo {
  u64 lastWriteTime;
  StreamSize size;
  u8 isDirectory  : 1;
  u8 isReadOnly   : 1;
  u8 isMountpoint : 1;
  u8 userFlags    : 5;
};

}
