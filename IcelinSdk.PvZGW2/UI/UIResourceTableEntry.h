#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854F60
   RuntimeId:        17EE
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C76E8
   Default Value:    0000000142BA8DB0
*/
#pragma pack(push, 8)
struct UIResourceTableEntry
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_RESOURCEREF Resource; /* 0x0000 */
  FB_UINT32 Hash; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UIResourceTableEntry) == 16);

}
