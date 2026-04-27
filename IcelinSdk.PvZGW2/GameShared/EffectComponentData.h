#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E660
   RuntimeId:        11FF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DB2
   VfTable:          00000001422730C0
   Address (Base):   00000001430EC520
*/
#pragma pack(push, 16)
class EffectComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EffectBlueprint) Effect; /* 0x0070 */
  FB_FLOAT32 EmitterParameter1; /* 0x0078 */
  FB_FLOAT32 EmitterParameter2; /* 0x007C */
  FB_FLOAT32 EmitterParameter3; /* 0x0080 */
  FB_FLOAT32 OverrideHeight; /* 0x0084 */
  FB_INT32 MaxInstances; /* 0x0088 */
  char pad_008C[0x0004];
  FB_REFARRAY(class EffectParameter) EffectParameters; /* 0x0090 */
  FB_BOOLEAN AutoStart; /* 0x0098 */
  FB_BOOLEAN SnapToWaterSurface; /* 0x0099 */
  FB_BOOLEAN IsFirstPerson; /* 0x009A */
  FB_BOOLEAN ApplyTransformDirectlyToEffect; /* 0x009B */
  char pad_009C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(EffectComponentData) == 160);

}
