#pragma once

/** @brief Provides the declaration for the `TurboData` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Core/Compartment.h>
#include <IcelinSdk.PvZGW2/IO/TurboEntry.h>
#include <IcelinSdk.PvZGW2/IO/TurboManifest.h>
#include <IcelinSdk.PvZGW2/IO/TurboQueue.h>
#include <IcelinSdk.PvZGW2/IO/TurboState.h>

namespace fb
{

struct TurboData {
  TurboState state;
  u32 internalState;

  TurboRequest *request;
  ResourceManager::Compartment *compartment;

  bool patching;

  TurboManifest manifest;

  u16 *chunkGuidTable;

  u32 recordIndex;
  u32 recordSerial;

  TurboEntry entry;

  u8 *dbxBuffer;
  bool bundleHasServerSidePatch;
};

}
