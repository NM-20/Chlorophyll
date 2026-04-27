#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849880
   RuntimeId:        0DC8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AC9
   VfTable:          000000014225FAB0
   Address (Base):   00000001430EE4A0
*/
#pragma pack(push, 16)
class TeleportEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN ApplyOrientation; /* 0x0018 */
  FB_BOOLEAN ForceTeleport; /* 0x0019 */
  FB_BOOLEAN TeleportCharacterIfInVehicle; /* 0x001A */
  FB_BOOLEAN ForceYUp; /* 0x001B */
  char pad_001C[0x0004];
  LinearTransform StartReferenceTransform; /* 0x0020 */
  LinearTransform EndReferenceTransform; /* 0x0060 */
  LinearTransform NewPositionTransform; /* 0x00A0 */
  FB_BOOLEAN ForceMinExitPos; /* 0x00E0 */
  FB_BOOLEAN FlipXOffset; /* 0x00E1 */
  FB_BOOLEAN AllowVehicles; /* 0x00E2 */
  char pad_00E3[0x000D];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */
#pragma pack(pop)

static_assert(sizeof(TeleportEntityData) == 240);

}
