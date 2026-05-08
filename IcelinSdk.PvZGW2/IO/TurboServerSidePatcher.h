#pragma once

/** @brief Provides the declaration for the `TurboServerSidePatcher` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Core/SHA1.h>
#include <IcelinSdk.PvZGW2/Utilities/StaticHashMap.h>

namespace fb
{

struct TurboServerSidePatchBundle {
};

struct TurboServerSidePatchEntry {
};

struct TurboServerSidePatcher {
  u8 *memory;
  u32 numBundles;
  const TurboServerSidePatchBundle *bundles;
  const TurboServerSidePatchEntry *entries;
  const u8 *payload;
  bool currentBundleIsPatched;
  StaticHashMap<SHA1, const u8 *> currentBundlePayloads;
};

}
