#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FDC8
   RuntimeId:        293E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09E6
   VfTable:          000000014236DD40
   Address (Base):   00000001430E2E00
*/
#pragma pack(push, 16)
class RaycastDirectionEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 RayHorizontalAngle; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform Transform; /* 0x0020 */
  FB_FLOAT32 RayVerticalAngle; /* 0x0060 */
  FB_FLOAT32 RayDistance; /* 0x0064 */
  FB_BOOLEAN ContinuousUpdate; /* 0x0068 */
  FB_BOOLEAN LockHorizontalRotation; /* 0x0069 */
  FB_BOOLEAN LockVerticalRotation; /* 0x006A */
  char pad_006B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(RaycastDirectionEntityData) == 112);

}
