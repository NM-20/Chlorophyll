#pragma once

/** @brief Provides the declaration for the `CacheData` structure. */

#include <IcelinSdk.PvZGW2/Reflection/PropertyModificationListener.h>
#include <IcelinSdk.PvZGW2/TypeInfo/BaseTypeInfo.h>

namespace fb
{

struct CacheData {
  struct ListenerRec {
    PropertyModificationListener *listener;
    PropertyId name;
  };

  void *value;
  const TypeInfo *valueType;

  union {
    PropertyModificationListener *listener;
    ListenerRec *listeners;
  };

  union {
    PropertyId listenerName;
    u32 listenerCount;
  };

  /* TODO: Try to figure out what each bit represents in this field. */
  u32 flags;
};

}