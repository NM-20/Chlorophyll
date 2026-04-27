#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TransformLayerData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F878
   RuntimeId:        12FF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CE9
   VfTable:          0000000142276AB0
   Address (Base):   00000001430EB9E0
*/
#pragma pack(push, 8)
class CameraAttachTransformLayerData : public TransformLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(CameraAttachTransformLayerData) == 56);

}
