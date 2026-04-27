#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATInputArrayProperty.h>

namespace fb
{

/* TypeInfo (Array): 00000001428324F8
   RuntimeId:        0044
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08A5
   VfTable:          00000001421E31B0
   Address (Base):   000000014311D910
*/
#pragma pack(push, 8)
class ATConditionArrayInput : public ATInputArrayProperty
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ATConditionArrayInput) == 24);

}
