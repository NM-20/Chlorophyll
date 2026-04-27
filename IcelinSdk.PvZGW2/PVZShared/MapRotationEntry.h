#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428689B0
   RuntimeId:        240F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3868
   Default Value:    00000001428689C8
*/
#pragma pack(push, 8)
struct MapRotationEntry
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING ShortGameModeName; /* 0x0000 */
  FB_CSTRING FullGameModeName; /* 0x0008 */
  FB_CSTRING MapName; /* 0x0010 */
  FB_CSTRING FullMapName; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MapRotationEntry) == 32);

}
