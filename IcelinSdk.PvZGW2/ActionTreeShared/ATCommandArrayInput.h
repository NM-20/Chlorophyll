#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATInputArrayProperty.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832518
   RuntimeId:        0046
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08A4
   VfTable:          00000001421E31A0
   Address (Base):   000000014311D8B0
*/
#pragma pack(push, 8)
class ATCommandArrayInput : public ATInputArrayProperty
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ATCommandArrayInput) == 24);

}
