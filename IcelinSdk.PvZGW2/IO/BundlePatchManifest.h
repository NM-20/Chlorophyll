#pragma once

/** @brief Provides the declaration for the `BundlePatchManifest` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

namespace fb
{

struct BundlePatchManifest {
  u32 version;
  u32 flags;
  u32 manifestPatchSize;
  u32 entryPatchSize;
};

}
