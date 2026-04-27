#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428730D0
   RuntimeId:        2B86
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8080
   Default Value:    000000014286835C
*/
#pragma pack(push, 4)
struct WaypointBaseTaskData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Radius; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(WaypointBaseTaskData) == 4);

}
