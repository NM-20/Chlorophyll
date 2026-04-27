#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATInputProperty.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832578
   RuntimeId:        004C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08AE
   VfTable:          00000001421E3170
   Address (Base):   000000014311D7F0
*/
#pragma pack(push, 8)
class ATConditionInput : public ATInputProperty
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ATConditionInput) == 24);

}
