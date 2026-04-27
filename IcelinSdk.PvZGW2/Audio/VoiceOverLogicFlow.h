#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428389F0
   RuntimeId:        060E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          060F
   VfTable:          00000001421F95E8
   Address (Base):   0000000143116530
*/
#pragma pack(push, 8)
class VoiceOverLogicFlow : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_HANDLE(class VoiceOverLogicAsset) Owner; /* 0x0018 */
  FB_HANDLE(class VoiceOverGroup) Group; /* 0x0020 */
  FB_REFARRAY(class VoiceOverValue) Locals; /* 0x0028 */
  FB_REFARRAY(class VoiceOverEventNode) Roots; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverLogicFlow) == 56);

}
