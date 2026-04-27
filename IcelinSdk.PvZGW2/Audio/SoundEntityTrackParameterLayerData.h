#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundEntityTrackLayerData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837A70
   RuntimeId:        051C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CD9
   VfTable:          00000001421F9EA8
   Address (Base):   00000001430FFA30
*/
#pragma pack(push, 8)
class SoundEntityTrackParameterLayerData : public SoundEntityTrackLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class CurveData) CurveData; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SoundEntityTrackParameterLayerData) == 56);

}
