#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/FireEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B278
   RuntimeId:        2612
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8AA0
   Default Value:    000000014286B290
*/
#pragma pack(push, 16)
struct OverHeatData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FireEffectData OverHeatEffect; /* 0x0000 */
  FB_FLOAT32 HeatPerBullet; /* 0x0060 */
  FB_FLOAT32 HeatIncPerSecond; /* 0x0064 */
  FB_FLOAT32 HeatDropPerSecond; /* 0x0068 */
  FB_FLOAT32 HeatRateOfFireIncreaseMultiplier; /* 0x006C */
  FB_FLOAT32 OverHeatPenaltyTime; /* 0x0070 */
  FB_FLOAT32 OverHeatThreshold; /* 0x0074 */
  FB_BOOLEAN OverHeatEffectPersists; /* 0x0078 */
  char pad_0079[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(OverHeatData) == 128);

}
