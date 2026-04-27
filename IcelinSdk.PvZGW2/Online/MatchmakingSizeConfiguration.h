#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/MatchmakingPlatform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858818
   RuntimeId:        1A55
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C67C8
   Default Value:    0000000142858718
*/
#pragma pack(push, 8)
struct MatchmakingSizeConfiguration
{
  typedef struct ValueTypeInfo TypeInfo_t;

  MatchmakingPlatform Platform; /* 0x0000 */
  char pad_0004[0x0004];
  FB_STDARRAY(FB_CSTRING) Settings; /* 0x0008 */
  FB_UINT32 DesiredPlayerCount; /* 0x0010 */
  FB_UINT32 MinPlayerCount; /* 0x0014 */
  FB_UINT32 MaxPlayerCapacity; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING MinFitThreshold; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MatchmakingSizeConfiguration) == 40);

}
