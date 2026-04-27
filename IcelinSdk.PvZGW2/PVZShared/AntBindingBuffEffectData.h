#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C448
   RuntimeId:        26E6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08FE
   VfTable:          0000000142366938
   Address (Base):   00000001430F62B0
*/
#pragma pack(push, 8)
class AntBindingBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinPowerThreshold; /* 0x0018 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x001C */
  AntRef ActiveGS; /* 0x0020 */
  AntRef PowerGS; /* 0x0034 */
  FB_BOOLEAN Spikeweeded; /* 0x0048 */
  FB_BOOLEAN SuperJump; /* 0x0049 */
  FB_BOOLEAN Knockback; /* 0x004A */
  char pad_004B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(AntBindingBuffEffectData) == 80);

}
