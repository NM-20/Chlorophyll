#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862578
   RuntimeId:        2062
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          075D
   VfTable:          0000000142343CB8
   Address (Base):   00000001430F88F0
*/
#pragma pack(push, 16)
class PVZAnimatedWaypointData : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class AntEnumeration) WaypointAnimationType; /* 0x0018 */
  Vec3 LoopOffset; /* 0x0020 */
  FB_UINT32 TotalFrames; /* 0x0030 */
  char pad_0034[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(PVZAnimatedWaypointData) == 64);

}
