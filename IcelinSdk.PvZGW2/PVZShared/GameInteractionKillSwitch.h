#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868740
   RuntimeId:        23ED
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C38C8
   Default Value:    0000000142866538
*/
#pragma pack(push, 8)
struct GameInteractionKillSwitch
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Identifier; /* 0x0000 */
  FB_CSTRING EntitledTestingLicenseOverride; /* 0x0008 */
  FB_BOOLEAN DisableInteraction; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(GameInteractionKillSwitch) == 24);

}
