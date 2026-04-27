#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        28F1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236E220
   Address:          00000001430C2228
   Default Value:    000000014286F3D0
*/
#pragma pack(push, 8)
struct ServerBackendDailyQuestsResponseMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ServerBackendDailyQuestsResponseMessage) == 72);

}
