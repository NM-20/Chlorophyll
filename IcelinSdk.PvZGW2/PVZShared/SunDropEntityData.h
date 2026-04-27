#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/GrenadeEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869568
   RuntimeId:        24A3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B19
   VfTable:          0000000142355D28
   Address (Base):   00000001430D3A90
*/
#pragma pack(push, 16)
class SunDropEntityData : public GrenadeEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MaxDistanceOfTarget; /* 0x0180 */
  FB_FLOAT32 DistanceToDetonate; /* 0x0184 */
  FB_FLOAT32 FriendlyAcceleration; /* 0x0188 */
  FB_FLOAT32 HealAmount; /* 0x018C */
  FB_FLOAT32 DamageAmount; /* 0x0190 */
  FB_FLOAT32 TimeToArm; /* 0x0194 */
  FB_FLOAT32 PVZGravity; /* 0x0198 */
  char pad_019C[0x0004];
  FB_HANDLE(class EffectBlueprint) SunEffect; /* 0x01A0 */
  FB_BOOLEAN AllowOwnerHealing; /* 0x01A8 */
  FB_BOOLEAN AllowAIPickup; /* 0x01A9 */
  char pad_01AA[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01B0 */
#pragma pack(pop)

static_assert(sizeof(SunDropEntityData) == 432);

}
