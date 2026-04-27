#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/GameShared/MapMarkerType.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>
#include <IcelinSdk.PvZGW2/GameShared/UIHudIcon.h>

namespace fb
{

/* TypeInfo (Array): 00000001428495A0
   RuntimeId:        0D9A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B51
   VfTable:          000000014225FFB8
   Address (Base):   00000001430D7990
*/
#pragma pack(push, 16)
class MapMarkerEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 BaseTransform; /* 0x0060 */
  LinearTransform VisualTransform; /* 0x0070 */
  FB_CSTRING Sid; /* 0x00B0 */
  FB_CSTRING NameLetter; /* 0x00B8 */
  FB_INT32 NrOfPassengers; /* 0x00C0 */
  FB_INT32 NrOfEntries; /* 0x00C4 */
  FB_FLOAT32 ShowRadius; /* 0x00C8 */
  FB_FLOAT32 HideRadius; /* 0x00CC */
  FB_FLOAT32 BlinkTime; /* 0x00D0 */
  MapMarkerType MarkerType; /* 0x00D4 */
  TeamId VisibleForTeam; /* 0x00D8 */
  TeamId OwnerTeam; /* 0x00DC */
  UIHudIcon HudIcon; /* 0x00E0 */
  char pad_00E4[0x0004];
  FB_CSTRING IconName; /* 0x00E8 */
  FB_HANDLE(class UIWorldIconBehavior) IconBehavior; /* 0x00F0 */
  FB_FLOAT32 VerticalOffset; /* 0x00F8 */
  FB_FLOAT32 FocusPointRadius; /* 0x00FC */
  FB_INT32 FocusPriority; /* 0x0100 */
  FB_FLOAT32 ProgressTime; /* 0x0104 */
  FB_FLOAT32 Progress; /* 0x0108 */
  FB_UINT32 TrackedPlayersInRange; /* 0x010C */
  FB_FLOAT32 TrackingPlayerRange; /* 0x0110 */
  FB_FLOAT32 InstantFlagReturnRadius; /* 0x0114 */
  FB_FLOAT32 ProgressPlayerSpeedUpPercentage; /* 0x0118 */
  FB_FLOAT32 ProgressTime1Player; /* 0x011C */
  FB_FLOAT32 ProgressMinTime; /* 0x0120 */
  FB_BOOLEAN IsVisible; /* 0x0124 */
  FB_BOOLEAN ShowAirTargetBox; /* 0x0125 */
  FB_BOOLEAN IsFocusPoint; /* 0x0126 */
  FB_BOOLEAN Snap; /* 0x0127 */
  FB_BOOLEAN OnlyShowSnapped; /* 0x0128 */
  FB_BOOLEAN UseMarkerTransform; /* 0x0129 */
  FB_BOOLEAN ServerControlledPosition; /* 0x012A */
  FB_BOOLEAN PositionStatic; /* 0x012B */
  FB_BOOLEAN Enabled; /* 0x012C */
  FB_BOOLEAN ShowDistanceInText; /* 0x012D */
  FB_BOOLEAN ShowProgress; /* 0x012E */
  char pad_012F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0130 */
#pragma pack(pop)

static_assert(sizeof(MapMarkerEntityData) == 304);

}
