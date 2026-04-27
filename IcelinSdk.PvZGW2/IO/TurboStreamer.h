#pragma once

/** @brief Provides the declaration for the `TurboStreamer` structure. */

#include <IcelinSdk.PvZGW2/IO/TurboQueue.h>
#include <IcelinSdk.PvZGW2/IO/TurboReader.h>

namespace fb
{

enum {
  kTurboStreamer_count = 2,
};

struct alignas(128) TurboStreamer {
  TurboQueue queue;
  TurboReader reader;
};

}
