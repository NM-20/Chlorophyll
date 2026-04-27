#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838F28
   RuntimeId:        064E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCDC8
   Default Value:    0000000142B894A0
*/
#pragma pack(push, 8)
struct DebrisHavokInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class HavokAsset) HavokAsset; /* 0x0000 */
  FB_INT32 ReserveCount; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(DebrisHavokInfo) == 16);

}
