#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836348
   RuntimeId:        03B3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD368
   Default Value:    0000000142BEBE08
*/
#pragma pack(push, 4)
struct MixGroupPropertyParameters
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 Property; /* 0x0000 */
  FB_FLOAT32 MinOffset; /* 0x0004 */
  FB_FLOAT32 MaxOffset; /* 0x0008 */
  FB_FLOAT32 DefaultValue; /* 0x000C */
  FB_BOOLEAN EnableOffsetMinMax; /* 0x0010 */
  FB_BOOLEAN OverrideDefaultValue; /* 0x0011 */
  char pad_0012[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(MixGroupPropertyParameters) == 20);

}
