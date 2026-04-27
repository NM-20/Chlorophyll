#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CF18
   RuntimeId:        10C6
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAE60
   Default Value:    000000014284CF30
*/
#pragma pack(push, 4)
struct AngleOfImpactData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Zone12Delimiter; /* 0x0000 */
  FB_FLOAT32 Zone23Delimiter; /* 0x0004 */
  FB_FLOAT32 Zone1Multiplier; /* 0x0008 */
  FB_FLOAT32 Zone2Multiplier; /* 0x000C */
  FB_FLOAT32 Zone3Multiplier; /* 0x0010 */
  FB_BOOLEAN Enabled; /* 0x0014 */
  char pad_0015[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AngleOfImpactData) == 24);

}
