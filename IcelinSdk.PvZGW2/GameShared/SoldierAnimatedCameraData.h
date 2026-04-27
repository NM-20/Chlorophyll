#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E638
   RuntimeId:        11FD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAA60
   Default Value:    000000014284E650
*/
#pragma pack(push, 4)
struct SoldierAnimatedCameraData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 CameraTransitionTime; /* 0x0000 */
  FB_BOOLEAN EnableFeature; /* 0x0004 */
  char pad_0005[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(SoldierAnimatedCameraData) == 8);

}
