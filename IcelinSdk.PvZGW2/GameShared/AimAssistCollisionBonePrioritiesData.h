#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E240
   RuntimeId:        11D1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAB60
   Default Value:    0000000142BA4878
*/
#pragma pack(push, 4)
struct AimAssistCollisionBonePrioritiesData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 StartPriority; /* 0x0000 */
  FB_INT32 MidPriority; /* 0x0004 */
  FB_INT32 EndPriority; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(AimAssistCollisionBonePrioritiesData) == 12);

}
