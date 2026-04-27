#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/FakePhysicsData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850D20
   RuntimeId:        1406
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1142
   VfTable:          000000014227F8E8
   Address (Base):   00000001430FC1F0
*/
#pragma pack(push, 16)
class FakeSpringData : public FakePhysicsData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Length; /* 0x0038 */
  FB_FLOAT32 Acceleration; /* 0x003C */
  Vec3 Direction; /* 0x0040 */
  FB_FLOAT32 ProgressiveExponent; /* 0x0050 */
  FB_FLOAT32 Damping; /* 0x0054 */
  char pad_0058[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(FakeSpringData) == 96);

}
