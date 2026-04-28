#pragma once

/** @brief Provides the declaration for various constants used by `TurboLoader`. */

namespace fb
{

enum {
  kIo_maxTaskSlotCount = 8,

  kTurboBuffer_maxCount = 24,
  kIo_maxBufferCount = kTurboBuffer_maxCount,

  kTurboQueue_maxPendingRemoveRequests = 32,
  kTurboStreamer_count = 2,
};

}
