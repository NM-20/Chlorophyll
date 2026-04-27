#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428376A0
   RuntimeId:        04E2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCFA8
   Default Value:    0000000142B88CB0
*/
#pragma pack(push, 4)
struct SoundGraphPluginInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 Id; /* 0x0000 */
  FB_UINT32 EnableAttributeReadMask; /* 0x0004 */
  FB_UINT8 ConnectionIndex; /* 0x0008 */
  FB_UINT8 OutputChannelCount; /* 0x0009 */
  FB_UINT8 ConstructParamsIndex; /* 0x000A */
  FB_UINT8 ConstructParamCount; /* 0x000B */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(SoundGraphPluginInfo) == 12);

}
