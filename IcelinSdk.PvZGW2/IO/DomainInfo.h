#pragma once

/** @brief Provides the declaration for the `DomainInfo` structure. */

#include <IcelinSdk.PvZGW2/ShortPrimitives.h>
#include <IcelinSdk.PvZGW2/Core/String.h>
#include <IcelinSdk.PvZGW2/IO/DomainImportInfo.h>
#include <IcelinSdk.PvZGW2/IO/WellKnownNamedAssetInfo.h>
#include <IcelinSdk.PvZGW2/Reflection/TypeRemapInfo.h>

#include <EASTL/vector.h>

namespace fb
{

struct DomainInfo {
  typedef eastl::vector<DomainImportInfo> ImportInfoList_t;
  typedef eastl::vector<TypeRemapInfo> TypeRemapInfoList_t;
  typedef eastl::vector<WellKnownNamedAssetInfo> WellKnownNamedAssetInfoList_t;

  String name;
  String root;

  s8 isEphemeral : 1;
  s8 isReadOnly : 1;
  s8 isTargetDomain : 1;
  s8 useBinaryXml : 1;
  s8 emitPlainText : 1;
  s8 useYaml : 1;
  s8 useFson : 1;

  ImportInfoList_t imports;
  TypeRemapInfoList_t emergencyMapping;
  WellKnownNamedAssetInfoList_t wellKnownNamedAssetsList;

  /* TODO: Could this be an enum? `u32` is a bit of an odd choice for
     anything else.
  */
  u32 xmlMode;
};

}
