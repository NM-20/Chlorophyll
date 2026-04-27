#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876528
   RuntimeId:        2DC2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0588
   Default Value:    0000000142BB5F18
*/
#pragma pack(push, 4)
struct StateNavEventInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 TriggerEventHash; /* 0x0000 */
  FB_INT32 OnEventHash; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(StateNavEventInfo) == 8);

}
