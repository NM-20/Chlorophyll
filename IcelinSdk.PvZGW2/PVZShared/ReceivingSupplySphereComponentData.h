#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428639A8
   RuntimeId:        2137
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D38
   VfTable:          00000001423534E8
   Address (Base):   00000001430E6820
*/
#pragma pack(push, 16)
class ReceivingSupplySphereComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EffectBlueprint) ReceivingHealingEffect; /* 0x0070 */
  FB_HANDLE(class EffectBlueprint) ReceivingDamageEffect; /* 0x0078 */
  FB_HANDLE(class EffectBlueprint) ReceivingAmmoEffect; /* 0x0080 */
  FB_HANDLE(class EffectBlueprint) ReceivingDynamicSpeedModifierEffect; /* 0x0088 */
  FB_BOOLEAN VFXEnabled; /* 0x0090 */
  char pad_0091[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(ReceivingSupplySphereComponentData) == 160);

}
