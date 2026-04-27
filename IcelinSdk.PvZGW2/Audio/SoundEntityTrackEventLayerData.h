#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundEntityTrackLayerData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837A50
   RuntimeId:        051A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CDB
   VfTable:          00000001421F9F00
   Address (Base):   0000000143117610
*/
#pragma pack(push, 8)
class SoundEntityTrackEventLayerData : public SoundEntityTrackLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SoundEntityTrackEventKeyframeData) Keyframes; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SoundEntityTrackEventLayerData) == 56);

}
