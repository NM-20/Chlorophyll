#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B88
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422DBD60
   Address:          00000001430C5E88
   Default Value:    0000000142859E10
*/
#pragma pack(push, 8)
struct PresenceEditorialUrlFetchCompleteMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PresenceEditorialUrlFetchCompleteMessage) == 48);

}
