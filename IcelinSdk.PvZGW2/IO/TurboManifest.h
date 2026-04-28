#pragma once

/** @brief Provides the declaration for the `TurboManifest` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/IO/BundleManifest.h>
#include <IcelinSdk.PvZGW2/IO/TurboManifest.h>

namespace fb
{

struct TurboManifest {
  union {
    u8 header[4];
    u32 size;
  };
  u8 *data;
  BundleManifest manifest;
};

}
