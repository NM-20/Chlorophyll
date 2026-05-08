#pragma once

/** @brief Provides the declaration for the `ResourceSysInvocation` structure. */

#include <IcelinSdk.PvZGW2/IO/ResourceSystem.h>
#include <IcelinSdk.PvZGW2/TypeInfo/ITypedObject.h>

namespace fb
{

struct ResourceSysInvocation {
  int sortOrder;
  ResourceSystem *system;
  ITypedObject **objects;
  int objectCount;
};

}
