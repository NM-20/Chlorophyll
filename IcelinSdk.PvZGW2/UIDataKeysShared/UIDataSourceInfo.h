#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875B30
   RuntimeId:        2D3C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B7D00
   Default Value:    0000000142875A30
*/
#pragma pack(push, 8)
struct UIDataSourceInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING DataName; /* 0x0000 */
  FB_HANDLE(class UIComponentData) DataCategory; /* 0x0008 */
  FB_INT32 DataKey; /* 0x0010 */
  FB_BOOLEAN UseDirectAccess; /* 0x0014 */
  FB_BOOLEAN UpdateOnInitialize; /* 0x0015 */
  char pad_0016[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIDataSourceInfo) == 24);

}
