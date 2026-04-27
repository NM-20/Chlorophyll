#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>
#include <IcelinSdk.PvZGW2/Emitter/LocationSelection.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839E18
   RuntimeId:        071C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08DD
   VfTable:          00000001421FF4F8
   Address (Base):   0000000143115A50
*/
#pragma pack(push, 8)
class UpdateBeamSourceData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LocationSelection Source; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UpdateBeamSourceData) == 56);

}
