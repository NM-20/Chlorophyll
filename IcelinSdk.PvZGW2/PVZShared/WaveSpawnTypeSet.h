#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428732D8
   RuntimeId:        2BA0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1028
   Default Value:    0000000142BB5D00
*/
#pragma pack(push, 8)
struct WaveSpawnTypeSet
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class WaveSpawnType) WaveSpawnType; /* 0x0000 */
  FB_INT32 MaxSpawnLimit; /* 0x0008 */
  FB_INT32 MinSpawnLimit; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(WaveSpawnTypeSet) == 16);

}
