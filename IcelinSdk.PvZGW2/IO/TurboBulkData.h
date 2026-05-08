#pragma once

/** @brief Provides the declaration for the `TurboBulkData` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Core/IResourceObject.h>
#include <IcelinSdk.PvZGW2/IO/ResourceBulkHeader.h>
#include <IcelinSdk.PvZGW2/IO/ResourceCompartment.h>
#include <IcelinSdk.PvZGW2/Memory/MemoryArena.h>

namespace fb
{

struct TurboBulkData {
  ResourceCompartment compartment;
  MemoryArena *arena;
  MemoryArena *fixupArena;
  u32 resourceTypeHash;
  u32 count;
  const u32 *originalFileSizes;
  const ResourceBulkHeader *headers;
  const char **debugNames;
  fb::IResourceObject **reloadTargets;
};

}
