#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839AD8
   RuntimeId:        06E8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08E2
   VfTable:          00000001421FF778
   Address (Base):   00000001430F1CE0
*/
#pragma pack(push, 8)
class UpdateSizeXData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UpdateSizeXData) == 48);

}
