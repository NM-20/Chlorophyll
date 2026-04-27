#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428763A8
   RuntimeId:        2DAA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0997
   VfTable:          0000000142393320
   Address (Base):   00000001430E0940
*/
#pragma pack(push, 8)
class ConfigEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class ConfigEntityAssetData) AssetToOutput; /* 0x0020 */
  FB_FLOAT32 neededToCreateOuputs; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ConfigEntityData) == 48);

}
