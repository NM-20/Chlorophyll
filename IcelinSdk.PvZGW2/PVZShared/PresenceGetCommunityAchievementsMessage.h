#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2912
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236E068
   Address:          00000001430C1E68
   Default Value:    000000014286F700
*/
#pragma pack(push, 8)
struct PresenceGetCommunityAchievementsMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PresenceGetCommunityAchievementsMessage) == 48);

}
