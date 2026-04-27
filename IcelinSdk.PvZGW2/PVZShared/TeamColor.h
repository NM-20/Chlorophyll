#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 00000001428619D0
   RuntimeId:        1FBB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C52C8
   Default Value:    0000000142BB4DE0
*/
#pragma pack(push, 16)
struct TeamColor
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec4 Color; /* 0x0000 */
  TeamId TeamId; /* 0x0010 */
  char pad_0014[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TeamColor) == 32);

}
