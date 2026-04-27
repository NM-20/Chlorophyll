#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CameraEntityBaseData.h>
#include <IcelinSdk.PvZGW2/GameShared/TargetMode.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DCC0
   RuntimeId:        117D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B43
   VfTable:          00000001422738E0
   Address (Base):   00000001430EC2E0
*/
#pragma pack(push, 16)
class PlayerCameraEntityData : public CameraEntityBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TargetMode SoldierTargetMode; /* 0x00A0 */
  FB_UINT32 SoldierCameraIndex; /* 0x00A4 */
  TargetMode VehicleTargetMode; /* 0x00A8 */
  FB_UINT32 VehicleCameraIndex; /* 0x00AC */
  FB_FLOAT32 CameraSmoothingFactor; /* 0x00B0 */
  FB_BOOLEAN ReleaseControlIfTargetLost; /* 0x00B4 */
  FB_BOOLEAN ShouldTargetControllable; /* 0x00B5 */
  FB_BOOLEAN ShouldTargetVehicleDriverEntry; /* 0x00B6 */
  FB_BOOLEAN ShouldTargetExtraPlayerInDoublePlayerEvent; /* 0x00B7 */
  FB_BOOLEAN ShouldTargetPrimaryCharacter; /* 0x00B8 */
  FB_BOOLEAN FilterPlayerEvents; /* 0x00B9 */
  char pad_00BA[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(PlayerCameraEntityData) == 192);

}
