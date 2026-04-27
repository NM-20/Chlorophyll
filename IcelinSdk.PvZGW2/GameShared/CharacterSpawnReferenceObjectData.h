#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/SpawnReferenceObjectData.h>
#include <IcelinSdk.PvZGW2/GameShared/PlayerSpawnType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B808
   RuntimeId:        0F82
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          098B
   VfTable:          0000000142268758
   Address (Base):   00000001430B5E50
*/
#pragma pack(push, 16)
class CharacterSpawnReferenceObjectData : public SpawnReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 VehicleEntryIndex; /* 0x0190 */
  char pad_0194[0x0004];
  FB_HANDLE(class CharacterSpawnTemplateData) Template; /* 0x0198 */
  FB_FLOAT32 HumanTargetPreference; /* 0x01A0 */
  PlayerSpawnType PlayerSpawnTypeOverride; /* 0x01A4 */
  FB_INT32 MenuShowOrder; /* 0x01A8 */
  FB_BOOLEAN AllowFallbackOnNextAvailabeVehicleEntry; /* 0x01AC */
  FB_BOOLEAN SpawnVisible; /* 0x01AD */
  FB_BOOLEAN IsTarget; /* 0x01AE */
  FB_BOOLEAN AffectMinimapPosition; /* 0x01AF */
  FB_BOOLEAN ShowAsLabelOnly; /* 0x01B0 */
  FB_BOOLEAN ShowInMenu; /* 0x01B1 */
  char pad_01B2[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01C0 */
#pragma pack(pop)

static_assert(sizeof(CharacterSpawnReferenceObjectData) == 448);

}
