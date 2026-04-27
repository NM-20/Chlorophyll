#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATVectorInput.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832738
   RuntimeId:        0068
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08B0
   VfTable:          00000001421E3090
   Address (Base):   000000014311D430
*/
#pragma pack(push, 16)
class ATVelocityInput : public ATVectorInput
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ATVelocityInput) == 48);

}
