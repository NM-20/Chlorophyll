#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WarnTarget.h>

namespace fb
{

/* TypeInfo (Array): 000000014286ACD8
   RuntimeId:        25DC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8CC0
   Default Value:    0000000142867298
*/
#pragma pack(push, 4)
struct LockingAndHomingData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  WarnTarget WarnLock; /* 0x0000 */
  FB_BOOLEAN IsHoming; /* 0x0004 */
  FB_BOOLEAN FireOnlyWhenLockedOn; /* 0x0005 */
  char pad_0006[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(LockingAndHomingData) == 8);

}
