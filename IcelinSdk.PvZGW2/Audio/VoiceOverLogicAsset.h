#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838A50
   RuntimeId:        0614
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0660
   VfTable:          00000001421F95B8
   Address (Base):   00000001430FF070
*/
#pragma pack(push, 8)
class VoiceOverLogicAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class VoiceOverEvent) Events; /* 0x0018 */
  FB_REFARRAY(class VoiceOverGroup) Groups; /* 0x0020 */
  FB_REFARRAY(class VoiceOverLogicFlow) Flows; /* 0x0028 */
  FB_REFARRAY(class VoiceOverLogicFlowConfigData) FlowConfigs; /* 0x0030 */
  FB_HANDLE(class VoiceOverSystemAsset) System; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverLogicAsset) == 64);

}
