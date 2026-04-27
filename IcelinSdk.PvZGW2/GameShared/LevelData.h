#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/WorldData.h>
#include <IcelinSdk.PvZGW2/GameShared/LevelDescription.h>
#include <IcelinSdk.PvZGW2/GameShared/LevelPreloadInfo.h>
#include <IcelinSdk.PvZGW2/GameShared/UnlockIdTable.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849180
   RuntimeId:        0D58
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0792
   VfTable:          0000000142260468
   Address (Base):   00000001430CE8D0
*/
#pragma pack(push, 8)
class LevelData : public WorldData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PathfindingBlobAsset) PathfindingBlobs; /* 0x0088 */
  FB_HANDLE(class GameAISystem) AISystem; /* 0x0090 */
  FB_HANDLE(class GameAISystem) AI2System; /* 0x0098 */
  FB_FLOAT32 WorldSizeXZ; /* 0x00A0 */
  FB_FLOAT32 WorldSizeMaxY; /* 0x00A4 */
  FB_FLOAT32 WorldSizeMinY; /* 0x00A8 */
  char pad_00AC[0x0004];
  LevelDescription LevelDescription; /* 0x00B0 */
  FB_CSTRING GameConfigurationName; /* 0x00D0 */
  FB_FLOAT32 DefaultFOV; /* 0x00D8 */
  FB_FLOAT32 InfantryFOVMultiplier; /* 0x00DC */
  FB_HANDLE(class StreamPoolPreset) StreamPoolPreset; /* 0x00E0 */
  FB_HANDLE(class VoiceOverSystemAsset) VoiceOverSystem; /* 0x00E8 */
  FB_REFARRAY(class VoiceOverLogicAsset) VoiceOverLogic; /* 0x00F0 */
  FB_HANDLE(class SoundMappingAsset) DefaultSoundMapping; /* 0x00F8 */
  FB_FLOAT32 MaxVehicleHeight; /* 0x0100 */
  char pad_0104[0x0004];
  FB_HANDLE(class EnlightenShaderDatabaseAsset) EnlightenShaderDatabase; /* 0x0108 */
  FB_HANDLE(class AntProjectAsset) AntProjectAsset; /* 0x0110 */
  FB_CSTRING AerialHeightmapData; /* 0x0118 */
  LevelPreloadInfo PreloadInfo; /* 0x0120 */
  FB_HANDLE(class FaceAnimationWaveMappings) FaceAnimationWaveMappings; /* 0x0130 */
  FB_STDARRAY(FB_CSTRING) AutoLoadBundles; /* 0x0138 */
  UnlockIdTable UnlockIdTable; /* 0x0140 */
  FB_BOOLEAN HugeBroadPhase; /* 0x0150 */
  FB_BOOLEAN FreeStreamingEnable; /* 0x0151 */
  char pad_0152[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0158 */
#pragma pack(pop)

static_assert(sizeof(LevelData) == 344);

}
