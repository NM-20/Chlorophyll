#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014287A0D8
   RuntimeId:        2E7C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C4B
   VfTable:          00000001423E4420
   Address (Base):   0000000143102A90
*/
#pragma pack(push, 16)
class FollowObjectEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Radius; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 Offset; /* 0x0020 */
  LinearTransform TargetTransform; /* 0x0030 */
  FB_BOOLEAN LocalOffset; /* 0x0070 */
  FB_BOOLEAN UsePathFinding; /* 0x0071 */
  char pad_0072[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(FollowObjectEntityData) == 128);

}
