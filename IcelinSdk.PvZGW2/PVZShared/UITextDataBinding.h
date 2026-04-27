#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIDataBinding.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIDataSourceInfo.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A760
   RuntimeId:        259B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E2E
   VfTable:          000000014235B2C8
   Address (Base):   00000001430E4A20
*/
#pragma pack(push, 8)
class UITextDataBinding : public UIDataBinding
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING StaticText; /* 0x0010 */
  UIDataSourceInfo TextData; /* 0x0018 */
  UIDataSourceInfo Visibility; /* 0x0030 */
  FB_BOOLEAN Refresh; /* 0x0048 */
  FB_BOOLEAN OverrideDirectAccess; /* 0x0049 */
  char pad_004A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(UITextDataBinding) == 80);

}
