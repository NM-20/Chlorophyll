#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATInputProperty.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832838
   RuntimeId:        0078
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08B3
   VfTable:          00000001421E3010
   Address (Base):   000000014311D130
*/
#pragma pack(push, 8)
class ATEntityInput : public ATInputProperty
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ATEntityInput) == 24);

}
