#pragma once

/** @brief Provides the declaration for the `TurboPatchState` enumeration. */

namespace fb
{

enum TurboPatchState {
  TurboPatchState_idle                    = 0,
  TurboPatchState_readPatchManifestHeader = 1,
  TurboPatchState_readManifestSize        = 2,
  TurboPatchState_readManifestPatchOp     = 3,
  TurboPatchState_readManifestData        = 4,
  TurboPatchState_readPatchOp             = 5,
  TurboPatchState_applyPatchOp            = 6,
};

}
