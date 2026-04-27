#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 00000001428650E0
   RuntimeId:        2287
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09ED
   VfTable:          0000000142351B40
   Address (Base):   00000001430E5F80
*/
#pragma pack(push, 16)
class CameraDistanceEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MaxTestDistance; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform TransformIn; /* 0x0020 */
  FB_BOOLEAN QueryContinously; /* 0x0060 */
  char pad_0061[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(CameraDistanceEntityData) == 112);

}
