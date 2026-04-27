#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EBB8
   RuntimeId:        124F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8E48
   Default Value:    0000000142BA4888
*/
#pragma pack(push, 8)
struct CamoUnlockSelection
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 Category; /* 0x0000 */
  char pad_0004[0x0004];
  FB_HANDLE(class UnlockAssetBase) Asset; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(CamoUnlockSelection) == 16);

}
