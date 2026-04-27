#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D2F8
   RuntimeId:        27BD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B87E0
   Default Value:    0000000142868158
*/
#pragma pack(push, 4)
struct RadialTriggerData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Radius; /* 0x0000 */
  FB_BOOLEAN RunOnce; /* 0x0004 */
  char pad_0005[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(RadialTriggerData) == 8);

}
