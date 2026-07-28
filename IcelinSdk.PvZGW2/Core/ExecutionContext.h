#pragma once

/** @brief Provides the declaration for the `ExecutionContext` class and all related types. */

#include <IcelinSdk.PvZGW2/Core/String.h>
#include <IcelinSdk.PvZGW2/IO/FsBackend.h>
#include <IcelinSdk.PvZGW2/IO/SuperBundleManager.h>
#include <IcelinSdk.PvZGW2/IO/VirtualFileSystem.h>

#include <EASTL/vector.h>

namespace fb
{

class ExecutionContext {
};

struct ExecutionContextData {
  typedef eastl::vector<String> OptionVec;

  OptionVec options;
  VirtualFileSystem *vfs;
  FsBackend *nativeFs;
  FsBackend *nativeRootFs;
  SuperBundleManager *superBundleManager;
};

}
