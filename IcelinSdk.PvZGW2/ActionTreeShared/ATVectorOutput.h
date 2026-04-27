#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATOutputProperty.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832618
   RuntimeId:        0056
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          089A
   VfTable:          00000001421E3120
   Address (Base):   00000001430DD070
*/
#pragma pack(push, 8)
class ATVectorOutput : public ATOutputProperty
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ATVectorOutput) == 16);

}
