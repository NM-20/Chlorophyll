#pragma once

/** @brief Provides the declaration for the `TurboStreamer` structure. */

#include <IcelinSdk.PvZGW2/IO/TurboData.h>
#include <IcelinSdk.PvZGW2/IO/TurboQueue.h>
#include <IcelinSdk.PvZGW2/IO/TurboReader.h>
#include <IcelinSdk.PvZGW2/IO/TurboRota.h>

namespace fb
{

struct alignas(128) TurboStreamer {
  TurboQueue queue;
  TurboReader reader;
  TurboData data;
  TurboRota rota;
};

}
