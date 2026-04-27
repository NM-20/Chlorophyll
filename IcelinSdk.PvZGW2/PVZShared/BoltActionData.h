#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AF48
   RuntimeId:        25FA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8BE0
   Default Value:    000000014286AF60
*/
#pragma pack(push, 4)
struct BoltActionData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 BoltActionDelay; /* 0x0000 */
  FB_FLOAT32 BoltActionTime; /* 0x0004 */
  FB_BOOLEAN HoldBoltActionUntilFireRelease; /* 0x0008 */
  FB_BOOLEAN HoldBoltActionUntilZoomRelease; /* 0x0009 */
  FB_BOOLEAN ForceBoltActionOnFireTrigger; /* 0x000A */
  FB_BOOLEAN UnZoomOnBoltAction; /* 0x000B */
  FB_BOOLEAN ReturnToZoomAfterBoltAction; /* 0x000C */
  char pad_000D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(BoltActionData) == 16);

}
