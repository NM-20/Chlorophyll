#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871F78
   RuntimeId:        2AF7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C16A8
   Default Value:    0000000142871F90
*/
#pragma pack(push, 8)
struct GameModeVariation
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Identifier; /* 0x0000 */
  FB_CSTRING Name; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(GameModeVariation) == 16);

}
