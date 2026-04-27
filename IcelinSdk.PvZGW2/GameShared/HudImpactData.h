#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D980
   RuntimeId:        1153
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C90A8
   Default Value:    000000014284D998
*/
#pragma pack(push, 4)
struct HudImpactData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 MinHealth; /* 0x0000 */
  FB_FLOAT32 MaxHealth; /* 0x0004 */
  FB_FLOAT32 MinTimeVisible; /* 0x0008 */
  FB_FLOAT32 MaxTimeVisible; /* 0x000C */
  FB_BOOLEAN Enable; /* 0x0010 */
  char pad_0011[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(HudImpactData) == 20);

}
