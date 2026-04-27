#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874488
   RuntimeId:        2C52
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B7F00
   Default Value:    0000000142BFF6E0
*/
#pragma pack(push, 4)
struct RecoveryTimes
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 IndividualRecovery; /* 0x0000 */
  FB_FLOAT32 GlobalRecovery; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(RecoveryTimes) == 8);

}
