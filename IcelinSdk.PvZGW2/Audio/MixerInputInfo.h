#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/MixerValueAccumulateMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836470
   RuntimeId:        03C3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD2C8
   Default Value:    0000000142B88C10
*/
#pragma pack(push, 4)
struct MixerInputInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  MixerValueAccumulateMode Mode; /* 0x0000 */
  FB_BOOLEAN KeepValue; /* 0x0004 */
  char pad_0005[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(MixerInputInfo) == 8);

}
