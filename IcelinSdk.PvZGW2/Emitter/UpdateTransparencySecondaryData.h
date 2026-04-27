#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839BB8
   RuntimeId:        06F6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08B8
   VfTable:          00000001421FF698
   Address (Base):   00000001430F1AA0
*/
#pragma pack(push, 8)
class UpdateTransparencySecondaryData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UpdateTransparencySecondaryData) == 48);

}
