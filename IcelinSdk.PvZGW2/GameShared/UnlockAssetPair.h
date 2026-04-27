#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C8A0
   RuntimeId:        1070
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9248
   Default Value:    0000000142BA4858
*/
#pragma pack(push, 8)
struct UnlockAssetPair
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class UnlockAssetBase) Second; /* 0x0000 */
  FB_HANDLE(class UnlockAssetBase) Result; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UnlockAssetPair) == 16);

}
