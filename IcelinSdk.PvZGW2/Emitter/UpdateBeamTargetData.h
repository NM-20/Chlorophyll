#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>
#include <IcelinSdk.PvZGW2/Emitter/LocationSelection.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839E38
   RuntimeId:        071E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08D1
   VfTable:          00000001421FF4D8
   Address (Base):   00000001431159F0
*/
#pragma pack(push, 8)
class UpdateBeamTargetData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LocationSelection Target; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UpdateBeamTargetData) == 56);

}
