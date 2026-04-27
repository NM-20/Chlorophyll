#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863820
   RuntimeId:        2128
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4B08
   Default Value:    0000000142BB4E80
*/
#pragma pack(push, 8)
struct TauntEntry
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class EffectBlueprint) TauntEffect; /* 0x0000 */
  FB_UINT32 TauntID; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TauntEntry) == 16);

}
