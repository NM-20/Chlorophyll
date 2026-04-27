#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/EntryInputActionType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B208
   RuntimeId:        0F2B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9428
   Default Value:    000000014284B220
*/
#pragma pack(push, 4)
struct EntryInputActionBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 Action; /* 0x0000 */
  FB_INT32 Alias; /* 0x0004 */
  EntryInputActionType ActionType; /* 0x0008 */
  FB_BOOLEAN Networked; /* 0x000C */
  char pad_000D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(EntryInputActionBinding) == 16);

}
