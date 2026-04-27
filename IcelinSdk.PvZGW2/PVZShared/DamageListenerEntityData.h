#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864E98
   RuntimeId:        2266
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C74
   VfTable:          0000000142351E00
   Address (Base):   00000001430E5FE0
*/
#pragma pack(push, 8)
class DamageListenerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 MaxIndicators; /* 0x0018 */
  FB_FLOAT32 IndicatorDisplayTime; /* 0x001C */
  LocalPlayerId LocalPlayerId; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(DamageListenerEntityData) == 40);

}
