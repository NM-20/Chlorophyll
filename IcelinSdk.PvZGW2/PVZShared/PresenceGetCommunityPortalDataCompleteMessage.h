#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2918
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236E108
   Address:          00000001430C1DA8
   Default Value:    000000014286F910
*/
#pragma pack(push, 8)
struct PresenceGetCommunityPortalDataCompleteMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0098];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */
#pragma pack(pop)

static_assert(sizeof(PresenceGetCommunityPortalDataCompleteMessage) == 152);

}
