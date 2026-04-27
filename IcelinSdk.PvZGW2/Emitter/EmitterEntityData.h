#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ChildEffectEntityData.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableFloat.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A1D8
   RuntimeId:        0758
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B8F
   VfTable:          00000001421FF2E0
   Address (Base):   00000001430FE230
*/
#pragma pack(push, 16)
class EmitterEntityData : public ChildEffectEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EmitterDocument) Emitter; /* 0x00A0 */
  QualityScalableFloat SpawnProbability; /* 0x00A8 */
  FB_UINT32 MaxNearbyInstanceCount; /* 0x00B8 */
  FB_FLOAT32 NearbyRadius; /* 0x00BC */
  FB_UINT8 DrawOrderSlot; /* 0x00C0 */
  FB_BOOLEAN LocalPlayerOnly; /* 0x00C1 */
  char pad_00C2[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */
#pragma pack(pop)

static_assert(sizeof(EmitterEntityData) == 208);

}
