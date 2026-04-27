#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/StaggerComponentBinding.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863E28
   RuntimeId:        217F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D1B
   VfTable:          0000000142352D88
   Address (Base):   00000001430D5350
*/
#pragma pack(push, 16)
class StaggerComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  StaggerComponentBinding StaggerAnimationBinding; /* 0x0070 */
  FB_FLOAT32 DamageThreshold; /* 0x0084 */
  FB_FLOAT32 Duration; /* 0x0088 */
  FB_FLOAT32 DamageDuration; /* 0x008C */
  FB_FLOAT32 DecayRate; /* 0x0090 */
  FB_FLOAT32 DecayAmount; /* 0x0094 */
  FB_FLOAT32 Speed; /* 0x0098 */
  FB_FLOAT32 MovementDuration; /* 0x009C */
  FB_BOOLEAN ResetDamageDuringStagger; /* 0x00A0 */
  char pad_00A1[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(StaggerComponentData) == 176);

}
