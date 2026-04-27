#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/GhostedProjectileEntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/GrenadeType.h>
#include <IcelinSdk.PvZGW2/PVZShared/ExplodeOnContactType.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DCB8
   RuntimeId:        2856
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B18
   VfTable:          000000014236EA58
   Address (Base):   00000001430BD480
*/
#pragma pack(push, 16)
class GrenadeEntityData : public GhostedProjectileEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Gravity; /* 0x0150 */
  FB_FLOAT32 CollisionSpeedMultiplier; /* 0x0154 */
  FB_FLOAT32 MinBounceSpeed; /* 0x0158 */
  FB_FLOAT32 CollisionDamage; /* 0x015C */
  GrenadeType GrenadeType; /* 0x0160 */
  FB_FLOAT32 Radius; /* 0x0164 */
  FB_CSTRING HudIndicatorIcon; /* 0x0168 */
  ExplodeOnContactType ExplodeOnContactType; /* 0x0170 */
  FB_BOOLEAN DetonateOnRest; /* 0x0174 */
  FB_BOOLEAN AddAIVisibilityObstruction; /* 0x0175 */
  FB_BOOLEAN ShowHudIndicator; /* 0x0176 */
  char pad_0177[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0180 */
#pragma pack(pop)

static_assert(sizeof(GrenadeEntityData) == 384);

}
