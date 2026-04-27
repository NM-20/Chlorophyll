#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableInt.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableFloat.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableBool.h>

namespace fb
{

/* TypeInfo (Array): 00000001428391F0
   RuntimeId:        0677
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B84
   VfTable:          00000001421FEA68
   Address (Base):   00000001430CEAB0
*/
#pragma pack(push, 16)
class EffectEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class GameObjectData) Components; /* 0x0060 */
  QualityScalableInt MaxActiveInstanceCount; /* 0x0068 */
  QualityScalableFloat CullDistance; /* 0x0078 */
  FB_FLOAT32 StartDelay; /* 0x0088 */
  FB_BOOLEAN KillWhenDistanceCulled; /* 0x008C */
  FB_BOOLEAN KillByWater; /* 0x008D */
  FB_BOOLEAN ResetInstanceWhenStarted; /* 0x008E */
  FB_BOOLEAN AttachToSpawnSurface; /* 0x008F */
  QualityScalableBool Enable; /* 0x0090 */
  FB_BOOLEAN OverrideDrawOrder; /* 0x0094 */
  char pad_0095[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(EffectEntityData) == 160);

}
