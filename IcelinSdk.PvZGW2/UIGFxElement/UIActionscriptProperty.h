#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIActionscriptPropertyType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875C00
   RuntimeId:        2D51
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C06A8
   Default Value:    0000000142875C18
*/
#pragma pack(push, 8)
struct UIActionscriptProperty
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  FB_UINT32 NameHash; /* 0x0008 */
  UIActionscriptPropertyType PropertyType; /* 0x000C */
  FB_BOOLEAN IsOutput; /* 0x0010 */
  FB_BOOLEAN DoCallback; /* 0x0011 */
  FB_BOOLEAN IsProxy; /* 0x0012 */
  char pad_0013[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIActionscriptProperty) == 24);

}
