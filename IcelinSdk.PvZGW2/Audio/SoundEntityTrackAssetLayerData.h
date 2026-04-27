#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundEntityTrackLayerData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837A90
   RuntimeId:        051E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CDA
   VfTable:          00000001421F9E50
   Address (Base):   00000001431175B0
*/
#pragma pack(push, 8)
class SoundEntityTrackAssetLayerData : public SoundEntityTrackLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SoundEntityTrackAssetKeyframeData) Keyframes; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SoundEntityTrackAssetLayerData) == 56);

}
