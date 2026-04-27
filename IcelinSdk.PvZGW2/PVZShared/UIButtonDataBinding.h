#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIDataBinding.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIDataSourceInfo.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIButtonSet.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A720
   RuntimeId:        2597
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E30
   VfTable:          000000014235B2E8
   Address (Base):   00000001430E4AE0
*/
#pragma pack(push, 8)
class UIButtonDataBinding : public UIDataBinding
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UIDataSourceInfo ButtonsDatasource; /* 0x0010 */
  UIButtonSet DefaultButtonSet; /* 0x0028 */
  UIDataSourceInfo Visibility; /* 0x0030 */
  FB_BOOLEAN InvertVisible; /* 0x0048 */
  FB_BOOLEAN Visible; /* 0x0049 */
  FB_BOOLEAN InputOnRelease; /* 0x004A */
  FB_BOOLEAN HiddenOnPC; /* 0x004B */
  char pad_004C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(UIButtonDataBinding) == 80);

}
