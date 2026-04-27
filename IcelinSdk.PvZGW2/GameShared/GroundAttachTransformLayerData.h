#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TransformLayerData.h>
#include <IcelinSdk.PvZGW2/GameShared/GroundAttachMethod.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F2D0
   RuntimeId:        12A7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CEC
   VfTable:          00000001422768F0
   Address (Base):   00000001430EBE60
*/
#pragma pack(push, 8)
class GroundAttachTransformLayerData : public TransformLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  GroundAttachMethod AttachMethod; /* 0x0038 */
  FB_FLOAT32 RaycastStartHeight; /* 0x003C */
  FB_FLOAT32 RaycastEndHeight; /* 0x0040 */
  FB_BOOLEAN AllowAboveGround; /* 0x0044 */
  char pad_0045[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(GroundAttachTransformLayerData) == 72);

}
