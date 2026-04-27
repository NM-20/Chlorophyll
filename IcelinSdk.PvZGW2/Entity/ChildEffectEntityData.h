#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableInt.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableFloat.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableBool.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C150
   RuntimeId:        0988
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B8B
   VfTable:          00000001422121F0
   Address (Base):   00000001430CE990
*/
#pragma pack(push, 16)
class ChildEffectEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class GameObjectData) Components; /* 0x0060 */
  QualityScalableInt MaxActiveInstanceCount; /* 0x0068 */
  QualityScalableFloat CullDistance; /* 0x0078 */
  FB_FLOAT32 StartDelay; /* 0x0088 */
  FB_BOOLEAN KillWhenDistanceCulled; /* 0x008C */
  FB_BOOLEAN ResetInstanceWhenStarted; /* 0x008D */
  FB_BOOLEAN AttachToSpawnSurface; /* 0x008E */
  QualityScalableBool Enable; /* 0x008F */
  FB_BOOLEAN OverrideDrawOrder; /* 0x0093 */
  char pad_0094[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(ChildEffectEntityData) == 160);

}
