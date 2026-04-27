#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/TrackPlayerEntityType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428650A0
   RuntimeId:        2283
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B00
   VfTable:          0000000142351B78
   Address (Base):   00000001430D3CD0
*/
#pragma pack(push, 16)
class TrackPlayerEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SnapHeightOffsetY; /* 0x0060 */
  TrackPlayerEntityType TrackPlayerType; /* 0x0064 */
  FB_BOOLEAN RandomizeTracker; /* 0x0068 */
  FB_BOOLEAN Enabled; /* 0x0069 */
  FB_BOOLEAN SnapHeightOnKilledDestroyed; /* 0x006A */
  FB_BOOLEAN SnapToExitPointOnVehicleDeath; /* 0x006B */
  FB_BOOLEAN CheckPlayerAlive; /* 0x006C */
  FB_BOOLEAN EnforceSharedCombatArea; /* 0x006D */
  FB_BOOLEAN UpdateFlagComponent; /* 0x006E */
  FB_BOOLEAN TrackMultiplePlayers; /* 0x006F */
  FB_BOOLEAN TrackHealth; /* 0x0070 */
  FB_BOOLEAN Reset; /* 0x0071 */
  FB_BOOLEAN ResetOnPlayerKilled; /* 0x0072 */
  char pad_0073[0x000D];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(TrackPlayerEntityData) == 128);

}
