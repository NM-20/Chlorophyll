#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849200
   RuntimeId:        0D60
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A80
   VfTable:          00000001422603E8
   Address (Base):   00000001430DC530
*/
#pragma pack(push, 8)
class HumanPlayerProxyEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN EnableOnDiedOnMeleeEvent; /* 0x0018 */
  FB_BOOLEAN EnableOnDiedInWaterEvent; /* 0x0019 */
  FB_BOOLEAN EnableOnDiedByDamageAreaEvent; /* 0x001A */
  FB_BOOLEAN EnableOnDiedByDamageAreaCrushedEvent; /* 0x001B */
  FB_BOOLEAN EnableOnDiedByOOBEvent; /* 0x001C */
  FB_BOOLEAN EnableOnDiedBySuicideEvent; /* 0x001D */
  FB_BOOLEAN EnableOnDiedByUnrevivableKill; /* 0x001E */
  char pad_001F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(HumanPlayerProxyEntityData) == 32);

}
