#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CameraData.h>
#include <IcelinSdk.PvZGW2/GameShared/HudData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D9B8
   RuntimeId:        1155
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DC8
   VfTable:          0000000142273BF0
   Address (Base):   00000001430BFFB0
*/
#pragma pack(push, 16)
class TargetCameraData : public CameraData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  HudData Hud; /* 0x0060 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */
#pragma pack(pop)

static_assert(sizeof(TargetCameraData) == 208);

}
