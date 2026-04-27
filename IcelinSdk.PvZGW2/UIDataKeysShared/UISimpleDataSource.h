#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428759F8
   RuntimeId:        2D38
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B56C8
   Default Value:    0000000142BB5F08
*/
#pragma pack(push, 8)
struct UISimpleDataSource
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class UIComponentData) DataCategory; /* 0x0000 */
  FB_INT32 DataKey; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UISimpleDataSource) == 16);

}
