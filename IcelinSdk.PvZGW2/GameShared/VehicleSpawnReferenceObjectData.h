#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/SpawnReferenceObjectData.h>
#include <IcelinSdk.PvZGW2/GameShared/EntryEnterRestriction.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B828
   RuntimeId:        0F84
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          098A
   VfTable:          00000001422687A8
   Address (Base):   00000001430B7470
*/
#pragma pack(push, 16)
class VehicleSpawnReferenceObjectData : public SpawnReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 WreckDuration; /* 0x0190 */
  EntryEnterRestriction EnterRestriction; /* 0x0194 */
  FB_FLOAT32 BotBailWhenHealthBelow; /* 0x0198 */
  FB_FLOAT32 BotBailOutDelay; /* 0x019C */
  FB_FLOAT32 RespawnRange; /* 0x01A0 */
  FB_FLOAT32 TimeUntilAbandoned; /* 0x01A4 */
  FB_FLOAT32 TimeUntilAbandonedIsDestroyed; /* 0x01A8 */
  FB_FLOAT32 KeepAliveRadius; /* 0x01AC */
  FB_INT32 ActiveStanceEntryIndex; /* 0x01B0 */
  FB_INT32 ActiveStance; /* 0x01B4 */
  FB_FLOAT32 VehicleIsNearDistance; /* 0x01B8 */
  FB_BOOLEAN SetTeamOnSpawn; /* 0x01BC */
  FB_BOOLEAN AffectedByImpulse; /* 0x01BD */
  FB_BOOLEAN AIAllowedToFollowHumanInVehicle; /* 0x01BE */
  FB_BOOLEAN AIUseExitPoints; /* 0x01BF */
  FB_BOOLEAN ApplyDamageToAbandonedVehicles; /* 0x01C0 */
  FB_BOOLEAN EnableAvailableSeatOutput; /* 0x01C1 */
  FB_BOOLEAN DisregardSpawnAllowedSetting; /* 0x01C2 */
  char pad_01C3[0x000D];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01D0 */
#pragma pack(pop)

static_assert(sizeof(VehicleSpawnReferenceObjectData) == 464);

}
