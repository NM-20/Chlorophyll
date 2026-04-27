#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428368D0
   RuntimeId:        0409
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DD6
   VfTable:          00000001421F4A38
   Address (Base):   0000000143118690
*/
#pragma pack(push, 8)
class SoundPatchConfigurationDebugData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class AudioGraphNodeData) SoloOutputNodes; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SoundPatchConfigurationDebugData) == 24);

}
