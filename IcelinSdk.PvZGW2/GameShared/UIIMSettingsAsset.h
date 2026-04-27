#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/GameShared/UIAutoScrollTextSettings.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C6E0
   RuntimeId:        1054
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          081C
   VfTable:          00000001422678B0
   Address (Base):   00000001430FCDF0
*/
#pragma pack(push, 8)
class UIIMSettingsAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UIAutoScrollTextSettings AutoScrollSettings; /* 0x0018 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIIMSettingsAsset) == 48);

}
