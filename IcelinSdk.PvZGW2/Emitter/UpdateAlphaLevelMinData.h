#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839C18
   RuntimeId:        06FC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08D7
   VfTable:          00000001421FF638
   Address (Base):   00000001430F1980
*/
#pragma pack(push, 8)
class UpdateAlphaLevelMinData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinLevel; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UpdateAlphaLevelMinData) == 56);

}
