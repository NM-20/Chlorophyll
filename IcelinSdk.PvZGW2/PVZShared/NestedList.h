#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIDataSourceInfo.h>
#include <IcelinSdk.PvZGW2/PVZShared/DefaultSelectionItem.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIListRowType.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A610
   RuntimeId:        258F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3468
   Default Value:    000000014286A640
*/
#pragma pack(push, 8)
struct NestedList
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Label; /* 0x0000 */
  FB_CSTRING Index; /* 0x0008 */
  UIDataSourceInfo ListDataSource; /* 0x0010 */
  UIDataSourceInfo DynamicShowList; /* 0x0028 */
  FB_STDARRAY(FB_CSTRING) StaticItems; /* 0x0040 */
  DefaultSelectionItem DefaultHighlighted; /* 0x0048 */
  UIListRowType RowType; /* 0x0068 */
  FB_BOOLEAN UseAsNormalListRows; /* 0x006C */
  FB_BOOLEAN HiddenOnPC; /* 0x006D */
  FB_BOOLEAN HiddenOnXenon; /* 0x006E */
  FB_BOOLEAN HiddenOnPS3; /* 0x006F */
  FB_BOOLEAN HiddenOnGen4a; /* 0x0070 */
  FB_BOOLEAN HiddenOnGen4b; /* 0x0071 */
  FB_BOOLEAN ShowOnlyFE; /* 0x0072 */
  FB_BOOLEAN HighLightOnUpdate; /* 0x0073 */
  char pad_0074[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(NestedList) == 120);

}
