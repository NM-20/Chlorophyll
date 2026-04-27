#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DB50
   RuntimeId:        1167
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9048
   Default Value:    000000014284DB68
*/
#pragma pack(push, 8)
struct PlayerViewDefinition
{
  typedef struct ValueTypeInfo TypeInfo_t;

  LocalPlayerId LocalPlayerId; /* 0x0000 */
  char pad_0004[0x0004];
  FB_STDARRAY(struct ViewDefinition) Views; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PlayerViewDefinition) == 16);

}
