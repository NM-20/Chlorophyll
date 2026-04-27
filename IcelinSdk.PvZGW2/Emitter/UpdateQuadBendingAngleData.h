#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839DB8
   RuntimeId:        0716
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08BD
   VfTable:          00000001421FF518
   Address (Base):   00000001430F16E0
*/
#pragma pack(push, 8)
class UpdateQuadBendingAngleData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UpdateQuadBendingAngleData) == 48);

}
