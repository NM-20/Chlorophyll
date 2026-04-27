#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2112
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423538B8
   Address:          00000001430C4C48
   Default Value:    0000000142863420
*/
#pragma pack(push, 8)
struct PVZCommanderActionsActionStateChangedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(PVZCommanderActionsActionStateChangedMessage) == 64);

}
