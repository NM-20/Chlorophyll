#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839B98
   RuntimeId:        06F4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08CB
   VfTable:          00000001421FF6F8
   Address (Base):   00000001430F1B00
*/
#pragma pack(push, 8)
class UpdateTransparencyData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 CullThreshold; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UpdateTransparencyData) == 56);

}
