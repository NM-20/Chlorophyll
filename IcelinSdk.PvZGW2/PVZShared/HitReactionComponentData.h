#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/HitReactionComponentBinding.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D558
   RuntimeId:        27E3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D9B
   VfTable:          0000000142365B18
   Address (Base):   00000001430D3370
*/
#pragma pack(push, 16)
class HitReactionComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  HitReactionComponentBinding HitReactionBinding; /* 0x0070 */
  FB_FLOAT32 MinHitReactionWeight; /* 0x0138 */
  FB_FLOAT32 MinHitReactionWeightDamage; /* 0x013C */
  FB_FLOAT32 MaxHitReactionWeightDamage; /* 0x0140 */
  FB_BOOLEAN Enabled; /* 0x0144 */
  char pad_0145[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0150 */
#pragma pack(pop)

static_assert(sizeof(HitReactionComponentData) == 336);

}
