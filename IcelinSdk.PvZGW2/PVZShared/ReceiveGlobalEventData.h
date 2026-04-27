#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864A88
   RuntimeId:        2228
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C47A8
   Default Value:    0000000142864AA0
*/
#pragma pack(push, 8)
struct ReceiveGlobalEventData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING EventName; /* 0x0000 */
  Realm ReceiveOn; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ReceiveGlobalEventData) == 16);

}
