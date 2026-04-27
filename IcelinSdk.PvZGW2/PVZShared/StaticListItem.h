#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UISimpleDataSource.h>
#include <IcelinSdk.PvZGW2/PVZShared/PlatformExclusions.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A570
   RuntimeId:        258B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3488
   Default Value:    000000014286A5A0
*/
#pragma pack(push, 8)
struct StaticListItem
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING ItemName; /* 0x0000 */
  FB_CSTRING ItemIndex; /* 0x0008 */
  UISimpleDataSource DynamicHide; /* 0x0010 */
  UISimpleDataSource DynamicDisable; /* 0x0020 */
  UISimpleDataSource DynamicNewContent; /* 0x0030 */
  FB_BOOLEAN AppendPlatformToSID; /* 0x0040 */
  PlatformExclusions PlatformExclusions; /* 0x0041 */
  FB_BOOLEAN ExcludeInRetail; /* 0x0046 */
  char pad_0047[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(StaticListItem) == 72);

}
