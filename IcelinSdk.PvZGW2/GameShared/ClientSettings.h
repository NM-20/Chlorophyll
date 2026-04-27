#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DEE0
   RuntimeId:        119B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11C6
   VfTable:          0000000142273648
   Address (Base):   00000001430B5890
*/
#pragma pack(push, 8)
class ClientSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 PCRumbleHighModifier; /* 0x0020 */
  FB_FLOAT32 PCRumbleLowModifier; /* 0x0024 */
  FB_FLOAT32 Gen4aRumbleHighModifier; /* 0x0028 */
  FB_FLOAT32 Gen4aRumbleLowModifier; /* 0x002C */
  FB_FLOAT32 Gen4bRumbleHighModifier; /* 0x0030 */
  FB_FLOAT32 Gen4bRumbleLowModifier; /* 0x0034 */
  FB_STDARRAY(FB_BOOLEAN) PadsRumbleEnabled; /* 0x0038 */
  FB_STDARRAY(FB_UINT32) PadsIndex; /* 0x0040 */
  FB_UINT32 VrDeviceType; /* 0x0048 */
  FB_FLOAT32 JuiceDistanceThreshold; /* 0x004C */
  FB_FLOAT32 JuiceTimeThreshold; /* 0x0050 */
  FB_FLOAT32 JuiceVehicleDistanceThreshold; /* 0x0054 */
  FB_FLOAT32 JuiceVehicleTimeThreshold; /* 0x0058 */
  char pad_005C[0x0004];
  FB_CSTRING ScreenshotFilename; /* 0x0060 */
  FB_CSTRING ScreenshotSuffix; /* 0x0068 */
  FB_UINT32 Team; /* 0x0070 */
  FB_INT32 SpawnPointIndex; /* 0x0074 */
  FB_CSTRING ServerIp; /* 0x0078 */
  FB_CSTRING SecondaryServerIp; /* 0x0080 */
  FB_FLOAT32 AimScale; /* 0x0088 */
  FB_FLOAT32 MouseSensitivityMin; /* 0x008C */
  FB_FLOAT32 MouseSensitivitySliderRange; /* 0x0090 */
  FB_FLOAT32 MouseSensitivityFactor; /* 0x0094 */
  FB_FLOAT32 MouseSensitivityPower; /* 0x0098 */
  FB_FLOAT32 XenonGamepadDeadZoneCenter; /* 0x009C */
  FB_FLOAT32 XenonGamepadDeadZoneAxis; /* 0x00A0 */
  FB_FLOAT32 XenonGamepadDeadZoneOffsetAxis; /* 0x00A4 */
  FB_FLOAT32 PS3GamepadDeadZoneCenter; /* 0x00A8 */
  FB_FLOAT32 PS3GamepadDeadZoneAxis; /* 0x00AC */
  FB_FLOAT32 PS3GamepadDeadZoneOffsetAxis; /* 0x00B0 */
  FB_FLOAT32 PCGamepadDeadZoneCenter; /* 0x00B4 */
  FB_FLOAT32 PCGamepadDeadZoneAxis; /* 0x00B8 */
  FB_FLOAT32 PCGamepadDeadZoneOffsetAxis; /* 0x00BC */
  FB_FLOAT32 Gen4aGamepadDeadZoneCenter; /* 0x00C0 */
  FB_FLOAT32 Gen4aGamepadDeadZoneAxis; /* 0x00C4 */
  FB_FLOAT32 Gen4aGamepadDeadZoneOffsetAxis; /* 0x00C8 */
  FB_FLOAT32 Gen4bGamepadDeadZoneCenter; /* 0x00CC */
  FB_FLOAT32 Gen4bGamepadDeadZoneAxis; /* 0x00D0 */
  FB_FLOAT32 Gen4bGamepadDeadZoneOffsetAxis; /* 0x00D4 */
  FB_CSTRING GamepadGuid; /* 0x00D8 */
  FB_FLOAT32 IncomingFrequency; /* 0x00E0 */
  FB_UINT32 IncomingRate; /* 0x00E4 */
  FB_UINT32 OutgoingRate; /* 0x00E8 */
  FB_FLOAT32 LoadingTimeout; /* 0x00EC */
  FB_FLOAT32 LoadedTimeout; /* 0x00F0 */
  FB_FLOAT32 IngameTimeout; /* 0x00F4 */
  FB_BOOLEAN IsSpectator; /* 0x00F8 */
  FB_BOOLEAN VsyncDuringLoadingScreenEnable; /* 0x00F9 */
  FB_BOOLEAN VisualFrameInterpolation; /* 0x00FA */
  FB_BOOLEAN DebrisClusterEnabled; /* 0x00FB */
  FB_BOOLEAN VegetationEnabled; /* 0x00FC */
  FB_BOOLEAN ForceEnabled; /* 0x00FD */
  FB_BOOLEAN WorldRenderEnabled; /* 0x00FE */
  FB_BOOLEAN TerrainEnabled; /* 0x00FF */
  FB_BOOLEAN WaterPhysicsEnabled; /* 0x0100 */
  FB_BOOLEAN OvergrowthEnabled; /* 0x0101 */
  FB_BOOLEAN EffectsEnabled; /* 0x0102 */
  FB_BOOLEAN EmittersEnabled; /* 0x0103 */
  FB_BOOLEAN AutoIncrementPadIndex; /* 0x0104 */
  FB_BOOLEAN JuicePlayerReportPositionEnabled; /* 0x0105 */
  FB_BOOLEAN LipSyncEnabled; /* 0x0106 */
  FB_BOOLEAN OnDamageSpottingEnabled; /* 0x0107 */
  FB_BOOLEAN IgnoreClientFireRateMultiplier; /* 0x0108 */
  FB_BOOLEAN PauseGameOnStartUp; /* 0x0109 */
  FB_BOOLEAN SkipFastLevelLoad; /* 0x010A */
  FB_BOOLEAN InputEnable; /* 0x010B */
  FB_BOOLEAN ScreenshotToFile; /* 0x010C */
  FB_BOOLEAN LoadMenu; /* 0x010D */
  FB_BOOLEAN DebugMenuOnLThumb; /* 0x010E */
  FB_BOOLEAN InvertFreeCamera; /* 0x010F */
  FB_BOOLEAN ScreenshotComparisonsEnable; /* 0x0110 */
  FB_BOOLEAN RenderTags; /* 0x0111 */
  FB_BOOLEAN InvertPitch; /* 0x0112 */
  FB_BOOLEAN InvertPadPcRightStick; /* 0x0113 */
  FB_BOOLEAN Scheme0FlipY; /* 0x0114 */
  FB_BOOLEAN Scheme1FlipY; /* 0x0115 */
  FB_BOOLEAN Scheme2FlipY; /* 0x0116 */
  FB_BOOLEAN InvertYaw; /* 0x0117 */
  FB_BOOLEAN ConsoleInputEmulation; /* 0x0118 */
  FB_BOOLEAN SampleInputEveryVisualFrame; /* 0x0119 */
  FB_BOOLEAN HavokVisualDebugger; /* 0x011A */
  FB_BOOLEAN HavokCaptureToFile; /* 0x011B */
  FB_BOOLEAN UseMouseAndKeyboardSystem; /* 0x011C */
  FB_BOOLEAN UseGlobalGamePadInput; /* 0x011D */
  FB_BOOLEAN ShowBuildId; /* 0x011E */
  FB_BOOLEAN ExtractPersistenceInformation; /* 0x011F */
  FB_BOOLEAN EnableRestTool; /* 0x0120 */
  FB_BOOLEAN LocalVehicleSimulationEnabled; /* 0x0121 */
  FB_BOOLEAN AsyncClientBulletEntity; /* 0x0122 */
  FB_BOOLEAN AutoUnspawnDynamicObjects; /* 0x0123 */
  FB_BOOLEAN QuitGameOnServerDisconnect; /* 0x0124 */
  FB_BOOLEAN DebugTrackAllPlayersInSpawnScreen; /* 0x0125 */
  FB_BOOLEAN UseOldKillerCamera; /* 0x0126 */
  FB_BOOLEAN LuaOptionSetEnable; /* 0x0127 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0128 */
#pragma pack(pop)

static_assert(sizeof(ClientSettings) == 296);

}
