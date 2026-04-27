#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428718A8
   RuntimeId:        2A8D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8120
   Default Value:    00000001428718C0
*/
#pragma pack(push, 4)
struct SundropIconParam
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 TimeToLive; /* 0x0000 */
  FB_FLOAT32 FallSpeed; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(SundropIconParam) == 8);

}
