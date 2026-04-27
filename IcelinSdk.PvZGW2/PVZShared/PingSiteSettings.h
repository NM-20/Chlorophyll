#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868760
   RuntimeId:        23EF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B90E0
   Default Value:    00000001428666B8
*/
#pragma pack(push, 4)
struct PingSiteSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 GoodPingThreshold; /* 0x0000 */
  FB_INT32 OkayPingThreshold; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(PingSiteSettings) == 8);

}
