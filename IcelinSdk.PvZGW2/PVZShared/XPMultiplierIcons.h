#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870E18
   RuntimeId:        2A0D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C18C8
   Default Value:    0000000142870E30
*/
#pragma pack(push, 8)
struct XPMultiplierIcons
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 XPThreshold; /* 0x0000 */
  char pad_0004[0x0004];
  FB_CSTRING IconId; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(XPMultiplierIcons) == 16);

}
