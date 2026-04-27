#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CameraEntityBaseData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DC80
   RuntimeId:        1179
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B3F
   VfTable:          00000001422739A0
   Address (Base):   00000001430DBAB0
*/
#pragma pack(push, 16)
class TargetCameraEntityData : public CameraEntityBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LinearTransform OffsetTransform; /* 0x00A0 */
  FB_HANDLE(class TargetCameraData) Camera; /* 0x00E0 */
  FB_FLOAT32 FOV; /* 0x00E8 */
  char pad_00EC[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */
#pragma pack(pop)

static_assert(sizeof(TargetCameraEntityData) == 240);

}
