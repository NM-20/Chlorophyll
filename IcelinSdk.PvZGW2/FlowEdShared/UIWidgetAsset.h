#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856DB8
   RuntimeId:        195B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0648
   VfTable:          00000001422CB420
   Address (Base):   000000014310D1D0
*/
#pragma pack(push, 8)
class UIWidgetAsset : public UIAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct WidgetEventQueryPair) WidgetEvents; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIWidgetAsset) == 40);

}
