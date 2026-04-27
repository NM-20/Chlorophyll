#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>
#include <IcelinSdk.PvZGW2/Emitter/VolumeMaskType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839F18
   RuntimeId:        072C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08C4
   VfTable:          00000001421FF418
   Address (Base):   0000000143115810
*/
#pragma pack(push, 8)
class UpdateVolumeMaskData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VolumeMaskType MaskType; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UpdateVolumeMaskData) == 56);

}
