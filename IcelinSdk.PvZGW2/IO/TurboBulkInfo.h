#pragma once

/** @brief Provides the declaration for the `TurboBulkInfo` structure and all related types. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/IO/IResourceLoader.h>
#include <IcelinSdk.PvZGW2/IO/TurboBulkData.h>

namespace fb
{

struct TurboBulkInfo {
  IResourceLoader *loader;
  u32 rangePart;
  TurboBulkData data;
};

}
