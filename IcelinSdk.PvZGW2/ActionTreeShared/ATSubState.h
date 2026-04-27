#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATState.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832948
   RuntimeId:        0088
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F56
   VfTable:          00000001421E2F88
   Address (Base):   0000000143101290
*/
#pragma pack(push, 8)
class ATSubState : public ATState
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN ControlsLifetime; /* 0x0048 */
  char pad_0049[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ATSubState) == 80);

}
