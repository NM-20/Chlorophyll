#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849920
   RuntimeId:        0DD2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB560
   Default Value:    0000000142849940
*/
#pragma pack(push, 16)
struct VFXLocationControl
{
  typedef struct ValueTypeInfo TypeInfo_t;

  LinearTransform Offset; /* 0x0000 */
  FB_INT32 Attachment; /* 0x0040 */
  FB_BOOLEAN StayAttached; /* 0x0044 */
  FB_BOOLEAN PreserveOrientation; /* 0x0045 */
  FB_BOOLEAN OffsetFromCharacterForward; /* 0x0046 */
  char pad_0047[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(VFXLocationControl) == 80);

}
