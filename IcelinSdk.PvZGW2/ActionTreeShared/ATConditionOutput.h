#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATBoolOutput.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832598
   RuntimeId:        004E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0898
   VfTable:          00000001421E3160
   Address (Base):   000000014311D790
*/
#pragma pack(push, 8)
class ATConditionOutput : public ATBoolOutput
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ATConditionOutput) == 16);

}
