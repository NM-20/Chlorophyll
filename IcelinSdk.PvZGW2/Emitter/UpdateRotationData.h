#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839A98
   RuntimeId:        06E4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08C1
   VfTable:          00000001421FF7B8
   Address (Base):   00000001430F1DA0
*/
#pragma pack(push, 8)
class UpdateRotationData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UpdateRotationData) == 48);

}
