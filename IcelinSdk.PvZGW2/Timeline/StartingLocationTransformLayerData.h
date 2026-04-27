#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TransformLayerData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854AC8
   RuntimeId:        179B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CEA
   VfTable:          00000001422B58B8
   Address (Base):   00000001430EA480
*/
#pragma pack(push, 8)
class StartingLocationTransformLayerData : public TransformLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StartingLocationTransformLayerData) == 56);

}
