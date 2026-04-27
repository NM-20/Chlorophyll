#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428582D8
   RuntimeId:        1A25
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C6A68
   Default Value:    00000001428582F0
*/
#pragma pack(push, 8)
struct GameAttributeData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Attribute; /* 0x0000 */
  FB_CSTRING Value; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(GameAttributeData) == 16);

}
