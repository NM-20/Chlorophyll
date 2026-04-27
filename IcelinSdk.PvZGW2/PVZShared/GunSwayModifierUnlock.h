#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286E290
   RuntimeId:        2874
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C2C68
   Default Value:    0000000142BFEDB8
*/
#pragma pack(push, 8)
struct GunSwayModifierUnlock
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_GUID UnlockAssetGuid; /* 0x0000 */
  FB_HANDLE(class GunSwayModifierData) Modifier; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(GunSwayModifierUnlock) == 24);

}
