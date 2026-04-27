#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839B18
   RuntimeId:        06EC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08E1
   VfTable:          00000001421FF738
   Address (Base):   00000001430F1C20
*/
#pragma pack(push, 8)
class UpdateSizeZData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UpdateSizeZData) == 48);

}
