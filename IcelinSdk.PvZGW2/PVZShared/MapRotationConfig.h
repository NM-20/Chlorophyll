#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428689F0
   RuntimeId:        2411
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3848
   Default Value:    0000000142866998
*/
#pragma pack(push, 8)
struct MapRotationConfig
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 MapRotationId; /* 0x0000 */
  char pad_0004[0x0004];
  FB_STDARRAY(enum GamePlatform) Platforms; /* 0x0008 */
  FB_CSTRING NameSid; /* 0x0010 */
  FB_CSTRING DescSid; /* 0x0018 */
  FB_CSTRING Mod; /* 0x0020 */
  FB_CSTRING Key; /* 0x0028 */
  FB_STDARRAY(struct MapRotationEntry) MapRotation; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(MapRotationConfig) == 56);

}
