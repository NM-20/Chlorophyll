#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBehavior.h>
#include <IcelinSdk.PvZGW2/PVZShared/ETeleportType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FB08
   RuntimeId:        1DF3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10ED
   VfTable:          000000014231D5C8
   Address (Base):   00000001430F9370
*/
#pragma pack(push, 8)
class PVZBehaviorWarp : public PVZBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  ETeleportType Warp; /* 0x0030 */
  FB_INT32 WeaponSlot; /* 0x0034 */
  FB_FLOAT32 TauntChance; /* 0x0038 */
  FB_FLOAT32 PreTauntDelay; /* 0x003C */
  FB_FLOAT32 ExitDelay; /* 0x0040 */
  FB_FLOAT32 RemainInvisibleTimeMin; /* 0x0044 */
  FB_FLOAT32 RemainInvisibleTimeMax; /* 0x0048 */
  char pad_004C[0x0004];
  FB_HANDLE(class BuffData) WarpBuff; /* 0x0050 */
  FB_HANDLE(class BuffData) PostWarpBuff; /* 0x0058 */
  FB_BOOLEAN UseTaunt; /* 0x0060 */
  FB_BOOLEAN UseExitDelay; /* 0x0061 */
  FB_BOOLEAN UseRemainInvisible; /* 0x0062 */
  FB_BOOLEAN UseBuffs; /* 0x0063 */
  char pad_0064[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(PVZBehaviorWarp) == 104);

}
