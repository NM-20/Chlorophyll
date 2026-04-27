#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/LockType.h>

namespace fb
{

/* TypeInfo (Array): 000000014286ACB8
   RuntimeId:        25DA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C32C8
   Default Value:    0000000142BFEC80
*/
#pragma pack(push, 4)
struct ZoomLevelLockData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 OutlineTaggedDistance; /* 0x0000 */
  LockType LockType; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(ZoomLevelLockData) == 8);

}
