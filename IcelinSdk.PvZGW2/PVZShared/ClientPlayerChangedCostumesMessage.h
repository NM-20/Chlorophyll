#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2899
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236E560
   Address:          00000001430C28E8
   Default Value:    000000014286E778
*/
#pragma pack(push, 8)
struct ClientPlayerChangedCostumesMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ClientPlayerChangedCostumesMessage) == 56);

}
