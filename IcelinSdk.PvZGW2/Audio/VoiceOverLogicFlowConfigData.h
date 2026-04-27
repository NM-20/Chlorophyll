#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838A10
   RuntimeId:        0610
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1103
   VfTable:          00000001421F95D8
   Address (Base):   00000001431164D0
*/
#pragma pack(push, 8)
class VoiceOverLogicFlowConfigData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_HANDLE(class VoiceOverLogicAsset) Owner; /* 0x0018 */
  FB_HANDLE(class VoiceOverGroup) Group; /* 0x0020 */
  FB_REFARRAY(class VoiceOverValue) Locals; /* 0x0028 */
  FB_REFARRAY(class VoiceOverEventNodeConfigData) Roots; /* 0x0030 */
  FB_HANDLE(class VoiceOverLogicFlow) Flow; /* 0x0038 */
  FB_REFARRAY(class VoiceOverNodeConfigData) NodeConfigs; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverLogicFlowConfigData) == 72);

}
