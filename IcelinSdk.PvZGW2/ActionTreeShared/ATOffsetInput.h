#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATVectorInput.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832778
   RuntimeId:        006C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08B1
   VfTable:          00000001421E3070
   Address (Base):   000000014311D370
*/
#pragma pack(push, 16)
class ATOffsetInput : public ATVectorInput
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ATOffsetInput) == 48);

}
