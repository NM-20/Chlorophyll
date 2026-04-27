#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864A58
   RuntimeId:        2226
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C47C8
   Default Value:    0000000142864A70
*/
#pragma pack(push, 8)
struct SendGlobalEventData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING EventName; /* 0x0000 */
  Realm SendFrom; /* 0x0008 */
  FB_BOOLEAN IsNetworked; /* 0x000C */
  char pad_000D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(SendGlobalEventData) == 16);

}
