#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B4B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142241288
   Address:          00000001430CBA08
   Default Value:    0000000142841EC0
*/
#pragma pack(push, 8)
struct ProfileOptionsApplyMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ProfileOptionsApplyMessage) == 64);

}
