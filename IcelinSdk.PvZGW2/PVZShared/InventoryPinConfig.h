#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861A70
   RuntimeId:        1FC3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C5288
   Default Value:    0000000142BB4E00
*/
#pragma pack(push, 1)
struct InventoryPinConfig
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_BOOLEAN InventoryPinKillswitch; /* 0x0000 */
  FB_BOOLEAN TransactionPinKillswitch; /* 0x0001 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0002 */
#pragma pack(pop)

static_assert(sizeof(InventoryPinConfig) == 2);

}
