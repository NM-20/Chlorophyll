#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIDataBinding.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UISimpleDataSource.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIDataSourceInfo.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A740
   RuntimeId:        2599
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E31
   VfTable:          000000014235B2D8
   Address (Base):   00000001430E4A80
*/
#pragma pack(push, 8)
class UIWidgetPathBinding : public UIDataBinding
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UISimpleDataSource WidgetPathQuery; /* 0x0010 */
  UIDataSourceInfo Visibility; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UIWidgetPathBinding) == 56);

}
