#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D2B8
   RuntimeId:        27B9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8800
   Default Value:    0000000142BB54B0
*/
#pragma pack(push, 4)
struct TeamTriggerFilterData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  TeamId FallbackTeam; /* 0x0000 */
  FB_BOOLEAN TriggerForFriendly; /* 0x0004 */
  FB_BOOLEAN TriggerForNeutral; /* 0x0005 */
  FB_BOOLEAN TriggerForHostile; /* 0x0006 */
  char pad_0007[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(TeamTriggerFilterData) == 8);

}
