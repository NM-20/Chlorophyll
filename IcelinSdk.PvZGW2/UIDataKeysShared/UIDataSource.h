#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875A18
   RuntimeId:        2D3A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B7D40
   Default Value:    0000000142875898
*/
#pragma pack(push, 8)
struct UIDataSource
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class UIComponentData) DataCategory; /* 0x0000 */
  FB_INT32 DataKey; /* 0x0008 */
  char pad_000C[0x0004];
  FB_CSTRING SchematicsProperty; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIDataSource) == 24);

}
