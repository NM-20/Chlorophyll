#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B4E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142241258
   Address:          00000001430CB9A8
   Default Value:    0000000142841CD8
*/
#pragma pack(push, 8)
struct ProfileOptionsSettingsSavedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ProfileOptionsSettingsSavedMessage) == 56);

}
