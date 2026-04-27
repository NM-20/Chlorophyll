#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873B28
   RuntimeId:        2C1C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0F08
   Default Value:    0000000142BFF6D8
*/
#pragma pack(push, 4)
struct ThreatData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Distance; /* 0x0000 */
  FB_FLOAT32 Threat; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(ThreatData) == 8);

}
