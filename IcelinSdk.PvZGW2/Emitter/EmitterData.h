#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839A38
   RuntimeId:        06DE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08B6
   VfTable:          00000001421FF818
   Address (Base):   00000001430F1E60
*/
#pragma pack(push, 8)
class EmitterData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class EmitterDocument) EmitterAssets; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(EmitterData) == 56);

}
