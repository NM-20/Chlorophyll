#pragma once

/** @brief Provides the declaration for the `FileIterator` structure. */

#include <IcelinSdk.PvZGW2/IO/FileInfo.h>

#include <cstddef>

namespace fb
{

struct FileIterator {
  virtual ~FileIterator();
  virtual bool getNextFile(char *buffer, size_t bufferSize, FileInfo *outInfo) = 0;
};

}
