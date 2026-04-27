#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TransformLayerData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F858
   RuntimeId:        12FD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CEE
   VfTable:          0000000142276BF0
   Address (Base):   00000001430EBB60
*/
#pragma pack(push, 16)
class AttachTransformLayerData : public TransformLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class GameObjectData) AttachEntity; /* 0x0038 */
  LinearTransform AttachOffset; /* 0x0040 */
  FB_CSTRING ChildBoneName; /* 0x0080 */
  FB_CSTRING ParentBoneName; /* 0x0088 */
  FB_STDARRAY(FB_GUID) AttachEntityGuidChain; /* 0x0090 */
  char pad_0098[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(AttachTransformLayerData) == 160);

}
