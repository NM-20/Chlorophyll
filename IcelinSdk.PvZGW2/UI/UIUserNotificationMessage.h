#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        17FF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422B8360
   Address:          00000001430C7528
   Default Value:    0000000142854FD0
*/
#pragma pack(push, 8)
struct UIUserNotificationMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIUserNotificationMessage) == 48);

}
