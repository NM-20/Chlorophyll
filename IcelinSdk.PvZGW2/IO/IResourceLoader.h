#pragma once

/** @brief Provides the declaration for the `IResourceLoader` interface. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Core/IResourceObject.h>
#include <IcelinSdk.PvZGW2/IO/Buffer.h>
#include <IcelinSdk.PvZGW2/IO/InplaceReloadSupport.h>
#include <IcelinSdk.PvZGW2/IO/ResourceCompartment.h>
#include <IcelinSdk.PvZGW2/IO/ResourceHandle.h>
#include <IcelinSdk.PvZGW2/IO/TurboBulkData.h>
#include <IcelinSdk.PvZGW2/IO/TurboLoaderSupport.h>
#include <IcelinSdk.PvZGW2/IO/TurboLoadRange.h>
#include <IcelinSdk.PvZGW2/Memory/MemoryArena.h>
#include <IcelinSdk.PvZGW2/TypeInfo/BaseTypeInfo.h>

namespace fb
{

struct ResourceLoaderType {
  const TypeInfo *type;
  const char *name;
  TurboLoaderSupport turboLoaderSupport;
  InplaceReloadSupport inplaceReloadSupport;
  u32 loadRangeCountPerResource;
};

struct IResourceLoader {
  virtual ~IResourceLoader() = 0;

  virtual const ResourceLoaderType *getTypes(u32 &outCount) = 0;

  virtual u32 prepareTurboBulk(TurboBulkData *data, TurboLoadRange *output, u32 outputMax) = 0;
  virtual void fixupTurboBulk(TurboBulkData *data, TurboLoadRange *ranges, u32 rangeCount, IResourceObject **output) = 0;
  virtual void failedTurboBulk(TurboBulkData *data, TurboLoadRange *ranges, u32 rangeCount) = 0;

  virtual IResourceObject *createDefault(MemoryArena &arena, const char *type) = 0;

  virtual IResourceObject *load(MemoryArena &arena, u32 typeHash, const char *name, const void *cookie, Buffer &buffer, ResourceCompartment compartment) = 0;
  virtual void postLoad(IResourceObject *object, ResourceHandle *handle, bool isAdhocLoad) = 0;
  virtual void cancel(IResourceObject *object, ResourceHandle *handle) = 0;
  virtual void reload(MemoryArena &arena, IResourceObject *object, u32 typeNameHash, const char *name, const void *cookie, Buffer &buffer, ResourceCompartment compartment) = 0;

  virtual bool directRefreshAllowed(ResourceHandle *handle) = 0;
  virtual const TypeInfo *const dataContainerDirectRefreshAllowed(u32 &outCount) = 0;
};

}
