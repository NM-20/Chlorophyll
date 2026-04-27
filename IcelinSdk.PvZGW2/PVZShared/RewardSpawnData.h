#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864BF8
   RuntimeId:        223C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B92E0
   Default Value:    0000000142BB4EF4
*/
#pragma pack(push, 4)
struct RewardSpawnData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 type; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(RewardSpawnData) == 4);

}
