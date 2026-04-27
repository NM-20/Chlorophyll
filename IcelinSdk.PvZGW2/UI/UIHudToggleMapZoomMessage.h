#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1809
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422B8300
   Address:          00000001430C73E8
   Default Value:    00000001428551E8
*/
#pragma pack(push, 8)
struct UIHudToggleMapZoomMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIHudToggleMapZoomMessage) == 48);

}
