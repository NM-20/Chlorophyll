#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839AF8
   RuntimeId:        06EA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08E0
   VfTable:          00000001421FF798
   Address (Base):   00000001430F1C80
*/
#pragma pack(push, 8)
class UpdateSizeYData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UpdateSizeYData) == 48);

}
