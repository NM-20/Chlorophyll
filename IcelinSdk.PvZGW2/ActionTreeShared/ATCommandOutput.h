#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATOutputProperty.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832818
   RuntimeId:        0076
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0896
   VfTable:          00000001421E3020
   Address (Base):   000000014311D190
*/
#pragma pack(push, 8)
class ATCommandOutput : public ATOutputProperty
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ATCommandOutput) == 16);

}
