#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        08B6
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014220B1F0
   Address:          00000001430CCA48
   Default Value:    000000014283B3D8
*/
#pragma pack(push, 8)
struct SettingsOnChangedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SettingsOnChangedMessage) == 56);

}
