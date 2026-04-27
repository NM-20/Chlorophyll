#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284ECA8
   RuntimeId:        1253
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8DE8
   Default Value:    000000014284ECC0
*/
#pragma pack(push, 8)
struct CustomizeVisual
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_REFARRAY(class UnlockAsset) Visual; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(CustomizeVisual) == 8);

}
