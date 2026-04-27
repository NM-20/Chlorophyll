#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C688
   RuntimeId:        270A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          092A
   VfTable:          00000001423665F0
   Address (Base):   00000001430D97D0
*/
#pragma pack(push, 16)
class LaunchBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BuffData) ApexBuff; /* 0x0018 */
  Vec3 Force; /* 0x0020 */
  Vec3 Blending; /* 0x0030 */
  FB_BOOLEAN DirectionRelativeToSource; /* 0x0040 */
  FB_BOOLEAN DirectionRelativeToRoot; /* 0x0041 */
  FB_BOOLEAN DirectionRelativeToSourceFacing; /* 0x0042 */
  FB_BOOLEAN UseAIExtraForces; /* 0x0043 */
  FB_BOOLEAN SyncLaunch; /* 0x0044 */
  char pad_0045[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(LaunchBuffEffectData) == 80);

}
