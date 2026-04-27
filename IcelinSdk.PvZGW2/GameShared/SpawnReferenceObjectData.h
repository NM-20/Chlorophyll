#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialReferenceObjectData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B708
   RuntimeId:        0F75
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0989
   VfTable:          0000000142268850
   Address (Base):   00000001430B6DF0
*/
#pragma pack(push, 16)
class SpawnReferenceObjectData : public SpatialReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LinearTransform ControllableTransform; /* 0x00A0 */
  LinearTransform ControllableInput; /* 0x00E0 */
  FB_REFARRAY(class ExtraSpawnData) ExtraSpawnData; /* 0x0120 */
  FB_CSTRING LocationNameSid; /* 0x0128 */
  FB_CSTRING LocationTextSid; /* 0x0130 */
  TeamId Team; /* 0x0138 */
  FB_FLOAT32 InitialSpawnDelay; /* 0x013C */
  FB_FLOAT32 SpawnDelay; /* 0x0140 */
  FB_INT32 MaxCount; /* 0x0144 */
  FB_INT32 MaxCountSimultaneously; /* 0x0148 */
  FB_INT32 TotalCountSimultaneouslyOfType; /* 0x014C */
  FB_FLOAT32 SpawnAreaRadius; /* 0x0150 */
  FB_FLOAT32 SpawnProtectionRadius; /* 0x0154 */
  FB_UINT32 SpawnProtectionFriendlyKilledCount; /* 0x0158 */
  FB_FLOAT32 SpawnProtectionFriendlyKilledTime; /* 0x015C */
  FB_INT32 TakeControlEntryIndex; /* 0x0160 */
  FB_FLOAT32 RotationYaw; /* 0x0164 */
  FB_FLOAT32 RotationPitch; /* 0x0168 */
  FB_FLOAT32 RotationRoll; /* 0x016C */
  FB_FLOAT32 Throttle; /* 0x0170 */
  FB_BOOLEAN Enabled; /* 0x0174 */
  FB_BOOLEAN LockedTeam; /* 0x0175 */
  FB_BOOLEAN InitialAutoSpawn; /* 0x0176 */
  FB_BOOLEAN AutoSpawn; /* 0x0177 */
  FB_BOOLEAN QueueSpawnEvent; /* 0x0178 */
  FB_BOOLEAN UseAsSpawnPoint; /* 0x0179 */
  FB_BOOLEAN SpawnProtectionCheckAllTeams; /* 0x017A */
  FB_BOOLEAN ClearBangersOnSpawn; /* 0x017B */
  FB_BOOLEAN OnlySendEventForHumanPlayers; /* 0x017C */
  FB_BOOLEAN SendWeaponEvents; /* 0x017D */
  FB_BOOLEAN TryToSpawnOutOfSight; /* 0x017E */
  FB_BOOLEAN TakeControlOnTransformChange; /* 0x017F */
  FB_BOOLEAN ReturnControlOnIdle; /* 0x0180 */
  FB_BOOLEAN UnspawnControllablesOnDestroy; /* 0x0181 */
  char pad_0182[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0190 */
#pragma pack(pop)

static_assert(sizeof(SpawnReferenceObjectData) == 400);

}
