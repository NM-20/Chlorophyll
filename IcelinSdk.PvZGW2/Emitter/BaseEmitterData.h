#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839758
   RuntimeId:        06B0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08C0
   VfTable:          00000001421FFAD8
   Address (Base):   00000001430F2400
*/
#pragma pack(push, 8)
class BaseEmitterData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EmitterDocument) EmitterAsset; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(BaseEmitterData) == 56);

}
