#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATInputProperty.h>

namespace fb
{

/* TypeInfo (Array): 00000001428327F8
   RuntimeId:        0074
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08A7
   VfTable:          00000001421E3030
   Address (Base):   000000014311D1F0
*/
#pragma pack(push, 8)
class ATCommandInput : public ATInputProperty
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ATCommandInput) == 24);

}
