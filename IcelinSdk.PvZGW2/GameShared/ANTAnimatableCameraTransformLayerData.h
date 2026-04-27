#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TransformLayerData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F7D8
   RuntimeId:        12F5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CE8
   VfTable:          0000000142276C40
   Address (Base):   00000001430EBA40
*/
#pragma pack(push, 8)
class ANTAnimatableCameraTransformLayerData : public TransformLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ANTAnimatableCameraTransformLayerData) == 56);

}
