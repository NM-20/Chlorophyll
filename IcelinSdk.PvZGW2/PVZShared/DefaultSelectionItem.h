#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIDataSourceInfo.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A490
   RuntimeId:        257F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8DE0
   Default Value:    000000014286A4A8
*/
#pragma pack(push, 8)
struct DefaultSelectionItem
{
  typedef struct ValueTypeInfo TypeInfo_t;

  UIDataSourceInfo DefaultSelectionQuery; /* 0x0000 */
  FB_INT32 DefaultSelectionIndex; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(DefaultSelectionItem) == 32);

}
