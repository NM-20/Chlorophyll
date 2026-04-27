#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DF88
   RuntimeId:        11A5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          061D
   VfTable:          00000001422735B8
   Address (Base):   0000000143111850
*/
#pragma pack(push, 8)
class BangerSpawnImpulseParams : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinHorizontalAngle; /* 0x0010 */
  FB_FLOAT32 MaxHorizontalAngle; /* 0x0014 */
  FB_FLOAT32 MinVerticalAngle; /* 0x0018 */
  FB_FLOAT32 MaxVerticalAngle; /* 0x001C */
  FB_FLOAT32 MinStrength; /* 0x0020 */
  FB_FLOAT32 MaxStrength; /* 0x0024 */
  FB_FLOAT32 WaterStrengthModifier; /* 0x0028 */
  FB_FLOAT32 LinearDamping; /* 0x002C */
  FB_FLOAT32 AngularDamping; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(BangerSpawnImpulseParams) == 56);

}
