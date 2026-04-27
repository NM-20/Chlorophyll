#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TransformLayerData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F838
   RuntimeId:        12FB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CEF
   VfTable:          0000000142276B50
   Address (Base):   00000001430EBBC0
*/
#pragma pack(push, 8)
class ANTTrajectoryTransformLayerData : public TransformLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ANTTrajectoryTransformLayerData) == 56);

}
