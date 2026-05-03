#pragma once

/** @brief Provides the declaration for the `BundleBufferRef` structure. */

#include <IcelinSdk.PvZGW2/IO/Buffer.h>

namespace fb
{

struct BundleBufferRef {
  Buffer *buffer;
  const char *filename;
};

}
