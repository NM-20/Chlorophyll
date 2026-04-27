#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871408
   RuntimeId:        2A4F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C0A
   VfTable:          000000014236CBC8
   Address (Base):   00000001430E1BA0
*/
#pragma pack(push, 8)
class UIPromoteCostumeEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TeamId TeamId; /* 0x0018 */
  FB_INT32 ClassIndex; /* 0x001C */
  FB_INT32 CostumeIndex; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIPromoteCostumeEntityData) == 40);

}
