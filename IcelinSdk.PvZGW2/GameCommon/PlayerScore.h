#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142845E68
   RuntimeId:        0BD4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CAA68
   Default Value:    0000000142BF4948
*/
#pragma pack(push, 4)
struct PlayerScore
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 Kills; /* 0x0000 */
  FB_UINT32 Deaths; /* 0x0004 */
  FB_UINT32 ScoreMultiplier; /* 0x0008 */
  FB_FLOAT32 Score; /* 0x000C */
  FB_FLOAT32 Time; /* 0x0010 */
  FB_UINT32 Stats; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PlayerScore) == 24);

}
