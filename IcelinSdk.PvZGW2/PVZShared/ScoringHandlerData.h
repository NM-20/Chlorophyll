#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869A08
   RuntimeId:        24E7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E26
   VfTable:          00000001423559A0
   Address (Base):   00000001430D3BB0
*/
#pragma pack(push, 8)
class ScoringHandlerData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ScoringHandlerData) == 16);

}
