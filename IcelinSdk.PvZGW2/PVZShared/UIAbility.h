#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870798
   RuntimeId:        29B7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8280
   Default Value:    00000001428707B0
*/
#pragma pack(push, 8)
struct UIAbility
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING TextureID; /* 0x0000 */
  FB_CSTRING StringID; /* 0x0008 */
  FB_BOOLEAN IsLocked; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIAbility) == 24);

}
