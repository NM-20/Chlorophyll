#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        20BD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142354100
   Address:          00000001430C4F08
   Default Value:    0000000142862BA8
*/
#pragma pack(push, 8)
struct PVZCharacterToComponentsInitializedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterToComponentsInitializedMessage) == 48);

}
