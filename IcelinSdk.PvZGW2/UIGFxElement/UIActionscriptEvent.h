#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875BD0
   RuntimeId:        2D4F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C06C8
   Default Value:    0000000142875BE8
*/
#pragma pack(push, 8)
struct UIActionscriptEvent
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  FB_UINT32 NameHash; /* 0x0008 */
  FB_BOOLEAN IsOutput; /* 0x000C */
  char pad_000D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UIActionscriptEvent) == 16);

}
