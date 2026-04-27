#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839C58
   RuntimeId:        0700
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08CC
   VfTable:          00000001421FF618
   Address (Base):   00000001430F18C0
*/
#pragma pack(push, 8)
class UpdateAlphaLevelScaleData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Exponent; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UpdateAlphaLevelScaleData) == 56);

}
