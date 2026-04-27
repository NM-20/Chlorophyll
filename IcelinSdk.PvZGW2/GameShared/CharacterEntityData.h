#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ControllableEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/PersonViewMode.h>
#include <IcelinSdk.PvZGW2/GameShared/PlayerSpawnType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DE90
   RuntimeId:        1198
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B27
   VfTable:          0000000142273688
   Address (Base):   00000001430B6D90
*/
#pragma pack(push, 16)
class CharacterEntityData : public ControllableEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MaxHealth; /* 0x00B0 */
  PersonViewMode DefaultViewMode; /* 0x00B4 */
  PlayerSpawnType PlayerSpawnType; /* 0x00B8 */
  char pad_00BC[0x0004];
  FB_HANDLE(class EntityVoiceOverInfo) VoiceOverInfo; /* 0x00C0 */
  FB_HANDLE(class CharacterSoundData) Sound; /* 0x00C8 */
  FB_BOOLEAN CharacterLightingEnable; /* 0x00D0 */
  FB_BOOLEAN ConvertControllableTransformToWorldSpace; /* 0x00D1 */
  FB_BOOLEAN AllowScaledCharacterAnimation; /* 0x00D2 */
  FB_BOOLEAN AnimatePositionOnly; /* 0x00D3 */
  char pad_00D4[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(CharacterEntityData) == 224);

}
