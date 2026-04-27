#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AD58
   RuntimeId:        25E4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8C60
   Default Value:    000000014286AD70
*/
#pragma pack(push, 4)
struct NearTargetDetonationData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 DetonationRadius; /* 0x0000 */
  FB_FLOAT32 MaxDetonationDelay; /* 0x0004 */
  FB_FLOAT32 MinDetonationDelay; /* 0x0008 */
  FB_BOOLEAN DetonateNearTarget; /* 0x000C */
  char pad_000D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(NearTargetDetonationData) == 16);

}
