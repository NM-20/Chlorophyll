#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839C78
   RuntimeId:        0702
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08DA
   VfTable:          00000001421FF5D8
   Address (Base):   0000000143115B70
*/
#pragma pack(push, 8)
class UpdateLightWrapAroundData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UpdateLightWrapAroundData) == 48);

}
