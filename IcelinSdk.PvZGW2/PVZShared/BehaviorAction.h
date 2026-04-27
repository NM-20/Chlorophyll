#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/EActionType.h>
#include <IcelinSdk.PvZGW2/PVZShared/EBTAction.h>

namespace fb
{

/* TypeInfo (Array): 00000001428745E8
   RuntimeId:        2B6A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1068
   Default Value:    0000000142BB5CF0
*/
#pragma pack(push, 4)
struct BehaviorAction
{
  typedef struct ValueTypeInfo TypeInfo_t;

  EActionType ActionType; /* 0x0000 */
  FB_INT32 Index; /* 0x0004 */
  EBTAction Action; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(BehaviorAction) == 12);

}
