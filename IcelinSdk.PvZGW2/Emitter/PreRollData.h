#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428397B8
   RuntimeId:        06B6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08BE
   VfTable:          00000001421FFA78
   Address (Base):   0000000143115DB0
*/
#pragma pack(push, 8)
class PreRollData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 PreRoll; /* 0x0030 */
  FB_FLOAT32 UpdatesPerSecond; /* 0x0034 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PreRollData) == 56);

}
