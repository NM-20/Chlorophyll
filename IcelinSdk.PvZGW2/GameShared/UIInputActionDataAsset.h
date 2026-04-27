#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B568
   RuntimeId:        0F5B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0719
   VfTable:          00000001422606A8
   Address (Base):   00000001430FD090
*/
#pragma pack(push, 8)
class UIInputActionDataAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DefaultRepeatDelaySec; /* 0x0018 */
  FB_FLOAT32 DefaultRepeatSpeedSec; /* 0x001C */
  FB_FLOAT32 DefaultOneAxisDeadZone; /* 0x0020 */
  FB_FLOAT32 DefaultTwoAxisDeadZone; /* 0x0024 */
  FB_STDARRAY(struct UIInputActionMapData) InputActionMaps; /* 0x0028 */
  FB_STDARRAY(struct UIAnalogInputMapData) AnalogInputMaps; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UIInputActionDataAsset) == 56);

}
