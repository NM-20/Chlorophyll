#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A90
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232C90
   Address:          00000001430CC4C8
   Default Value:    000000014283F618
*/
#pragma pack(push, 8)
struct ClientOSHelpMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ClientOSHelpMessage) == 56);

}
