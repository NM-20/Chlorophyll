#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ButtonEnum.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871A70
   RuntimeId:        2AA9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1748
   Default Value:    0000000142871A88
*/
#pragma pack(push, 8)
struct UIPopupInstanceButtonWrapper
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING ButtonText; /* 0x0000 */
  ButtonEnum Button; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UIPopupInstanceButtonWrapper) == 16);

}
