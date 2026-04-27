#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/GameShared/RotorModelData.h>
#include <IcelinSdk.PvZGW2/GameShared/RotationAxis.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CB50
   RuntimeId:        1096
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DB3
   VfTable:          00000001422674B0
   Address (Base):   00000001430D6F10
*/
#pragma pack(push, 16)
class RotorComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  RotorModelData LowRpmModel; /* 0x0070 */
  RotorModelData HighRpmModel; /* 0x0078 */
  RotationAxis RotationAxis; /* 0x0080 */
  FB_FLOAT32 RotationMultiplier; /* 0x0084 */
  FB_FLOAT32 ChangeModelRpm; /* 0x0088 */
  char pad_008C[0x0004];
  FB_HANDLE(class EffectBlueprint) BlowEffect; /* 0x0090 */
  FB_FLOAT32 TriggerGroundEffectHeight; /* 0x0098 */
  FB_FLOAT32 CriticallyDamagedRotationForce; /* 0x009C */
  FB_BOOLEAN OnlyTriggerBlowEffectInWater; /* 0x00A0 */
  FB_BOOLEAN GroundEffectOnTerrainOnly; /* 0x00A1 */
  FB_BOOLEAN CriticalDamage; /* 0x00A2 */
  char pad_00A3[0x000D];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(RotorComponentData) == 176);

}
