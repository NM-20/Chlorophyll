#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATVectorOutput.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832798
   RuntimeId:        006E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          089B
   VfTable:          00000001421E3060
   Address (Base):   000000014311D310
*/
#pragma pack(push, 8)
class ATOffsetOutput : public ATVectorOutput
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ATOffsetOutput) == 16);

}
