#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponLagEffectSpringVector.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponLagEffectForceData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D688
   RuntimeId:        2808
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1144
   VfTable:          000000014236FD58
   Address (Base):   0000000143105A90
*/
#pragma pack(push, 16)
class WeaponLagSpringEffectData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  WeaponLagEffectSpringVector OffsetSprings; /* 0x0010 */
  char pad_0028[0x0008];
  WeaponLagEffectForceData JumpForces; /* 0x0030 */
  WeaponLagEffectForceData LandForces; /* 0x0050 */
  WeaponLagEffectForceData PoseUpForces; /* 0x0070 */
  WeaponLagEffectForceData PoseDownForces; /* 0x0090 */
  WeaponLagEffectSpringVector RotationSprings; /* 0x00B0 */
  FB_FLOAT32 ZoomForceModifier; /* 0x00C8 */
  char pad_00CC[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */
#pragma pack(pop)

static_assert(sizeof(WeaponLagSpringEffectData) == 208);

}
