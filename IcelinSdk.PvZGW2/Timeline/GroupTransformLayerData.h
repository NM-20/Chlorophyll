#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TransformLayerData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854A68
   RuntimeId:        1795
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CE6
   VfTable:          00000001422B5908
   Address (Base):   00000001430EA5A0
*/
#pragma pack(push, 8)
class GroupTransformLayerData : public TransformLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class TransformLayerData) Children; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(GroupTransformLayerData) == 64);

}
