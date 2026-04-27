#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UITextEntryType.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIDataSource.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876618
   RuntimeId:        2DCD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0528
   Default Value:    0000000142876630
*/
#pragma pack(push, 8)
struct UIElementTextEntry
{
  typedef struct ValueTypeInfo TypeInfo_t;

  UITextEntryType TextType; /* 0x0000 */
  char pad_0004[0x0004];
  FB_CSTRING Text; /* 0x0008 */
  FB_CSTRING FloatFormat; /* 0x0010 */
  UIDataSource DataSource; /* 0x0018 */
  FB_BOOLEAN UseLocalization; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UIElementTextEntry) == 56);

}
