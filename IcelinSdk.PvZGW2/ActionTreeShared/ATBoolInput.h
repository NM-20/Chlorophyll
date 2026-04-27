#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATInputProperty.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832538
   RuntimeId:        0048
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08A8
   VfTable:          00000001421E3190
   Address (Base):   000000014311D850
*/
#pragma pack(push, 8)
class ATBoolInput : public ATInputProperty
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN DefaultValue; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ATBoolInput) == 32);

}
