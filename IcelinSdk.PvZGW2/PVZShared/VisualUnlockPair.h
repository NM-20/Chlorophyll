#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428642C8
   RuntimeId:        21C7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4968
   Default Value:    0000000142BB4EE0
*/
#pragma pack(push, 8)
struct VisualUnlockPair
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class VisualUnlockAsset) BaseUnlock; /* 0x0000 */
  FB_HANDLE(class VisualUnlockAsset) ReplacementUnlock; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(VisualUnlockPair) == 16);

}
