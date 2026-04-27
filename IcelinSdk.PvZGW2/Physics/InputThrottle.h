#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850FD8
   RuntimeId:        142A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA580
   Default Value:    0000000142850E78
*/
#pragma pack(push, 4)
struct InputThrottle
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 ForwardSpeedSupressionAmount; /* 0x0000 */
  FB_FLOAT32 BackwardSpeedSupressionAmount; /* 0x0004 */
  FB_FLOAT32 SideSpeedSupressionAmount; /* 0x0008 */
  FB_FLOAT32 IgnoreBrakeSpeedThreshold; /* 0x000C */
  FB_BOOLEAN Enabled; /* 0x0010 */
  char pad_0011[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(InputThrottle) == 20);

}
