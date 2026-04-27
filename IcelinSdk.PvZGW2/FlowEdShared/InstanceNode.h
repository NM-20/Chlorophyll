#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UINodeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856FF8
   RuntimeId:        197F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          112B
   VfTable:          00000001422CB340
   Address (Base):   00000001430FAB70
*/
#pragma pack(push, 8)
class InstanceNode : public UINodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIGraphAsset) UIGraph; /* 0x0028 */
  FB_REFARRAY(class UINodePort) Inputs; /* 0x0030 */
  FB_REFARRAY(class UINodePort) Outputs; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(InstanceNode) == 64);

}
