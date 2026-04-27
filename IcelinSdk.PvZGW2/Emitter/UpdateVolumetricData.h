#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839ED8
   RuntimeId:        0728
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08CE
   VfTable:          00000001421FF438
   Address (Base):   00000001430F1680
*/
#pragma pack(push, 8)
class UpdateVolumetricData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Absorption; /* 0x0030 */
  FB_BOOLEAN HighQualityInjection; /* 0x0034 */
  char pad_0035[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UpdateVolumetricData) == 56);

}
