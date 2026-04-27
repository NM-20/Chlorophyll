#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839B38
   RuntimeId:        06EE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08D0
   VfTable:          00000001421FF758
   Address (Base):   0000000143115BD0
*/
#pragma pack(push, 8)
class UpdateCustomParamsData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UpdateCustomParamsData) == 48);

}
