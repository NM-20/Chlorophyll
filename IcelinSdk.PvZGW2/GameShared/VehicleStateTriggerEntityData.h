#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TriggerEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C030
   RuntimeId:        0FFE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B70
   VfTable:          0000000142267D60
   Address (Base):   00000001430ED2A0
*/
#pragma pack(push, 16)
class VehicleStateTriggerEntityData : public TriggerEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 LockAmount; /* 0x0070 */
  FB_UINT32 SeatSpecificIndexForHuman; /* 0x0074 */
  FB_UINT32 SeatSpecificIndexForAi; /* 0x0078 */
  FB_UINT32 BulletCount; /* 0x007C */
  FB_UINT32 HealthToSet; /* 0x0080 */
  FB_UINT32 HealthToCheck; /* 0x0084 */
  FB_FLOAT32 DestructionRadius; /* 0x0088 */
  FB_BOOLEAN AllowHumanToEnterAllSeats; /* 0x008C */
  FB_BOOLEAN RestrictHumanToSpecificSeat; /* 0x008D */
  FB_BOOLEAN AllowAiToEnterAllSeats; /* 0x008E */
  FB_BOOLEAN BanAiFromSpecificSeat; /* 0x008F */
  FB_BOOLEAN TriggerCriticalOnHealthSet; /* 0x0090 */
  FB_BOOLEAN CheckHealthGreaterOrEqual; /* 0x0091 */
  FB_BOOLEAN ShouldDestroyVehicles; /* 0x0092 */
  FB_BOOLEAN ShouldDestroyBangers; /* 0x0093 */
  char pad_0094[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(VehicleStateTriggerEntityData) == 160);

}
