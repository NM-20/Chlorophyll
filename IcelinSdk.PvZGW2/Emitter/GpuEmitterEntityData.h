#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ChildEffectEntityData.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableFloat.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A2B8
   RuntimeId:        0766
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B8C
   VfTable:          00000001421FF268
   Address (Base):   00000001430FE170
*/
#pragma pack(push, 16)
class GpuEmitterEntityData : public ChildEffectEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class GpuEmitterDocument) Emitter; /* 0x00A0 */
  QualityScalableFloat SpawnProbability; /* 0x00A8 */
  FB_BOOLEAN LocalPlayerOnly; /* 0x00B8 */
  char pad_00B9[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(GpuEmitterEntityData) == 192);

}
