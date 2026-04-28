#pragma once

/** @brief Provides the declaration for all state-related types from `TurboLoader`. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>

namespace fb
{

struct TurboLoader;

typedef int(*TurboStateFunction)(TurboLoader *tl, u32 sid, u32 flags);

enum TurboState {
  TurboState_idle              = 0,
  TurboState_enterBundleMode   = 1,
  TurboState_leaveBundleMode   = 2,
  TurboState_parseRequest      = 3,
  TurboState_clear             = 4,
  TurboState_loadManifest      = 5,
  TurboState_initDbx           = 6,
  TurboState_loadDbx           = 7,
  TurboState_initEbx           = 8,
  TurboState_loadEbx           = 9,
  TurboState_finalizeEbx       = 10,
  TurboState_initResourceTypes = 11,
  TurboState_initResource      = 12,
  TurboState_loadRetroResource = 13,
  TurboState_loadResource      = 14,
  TurboState_unknown           = 15,
  TurboState_preChunks         = 16,
  TurboState_initChunk         = 17,
  TurboState_loadChunk         = 18,
  TurboState_postChunks        = 19,
  TurboState_initFsChunk       = 20,
  TurboState_loadFsChunk       = 21,
  TurboState_endRequest        = 22,
  TurboState_finalize          = 23,
  TurboState_abort             = 24,
  TurboState_suspended         = 25,
  TurboState_count             = 26,
};

}
