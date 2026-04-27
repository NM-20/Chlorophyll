#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861878
   RuntimeId:        1FAD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C5368
   Default Value:    0000000142861890
*/
#pragma pack(push, 4)
struct GameModeTeamSize
{
  typedef struct ValueTypeInfo TypeInfo_t;

  TeamId Team; /* 0x0000 */
  FB_UINT32 PlayerCount; /* 0x0004 */
  FB_BOOLEAN IsAIOnly; /* 0x0008 */
  char pad_0009[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(GameModeTeamSize) == 12);

}
