#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858C48
   RuntimeId:        1A89
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B99A0
   Default Value:    0000000142858C60
*/
#pragma pack(push, 8)
struct Ps3ServiceId
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING SPID; /* 0x0000 */
  FB_CSTRING ProductCode; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(Ps3ServiceId) == 16);

}
