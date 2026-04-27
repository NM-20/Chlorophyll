#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856B38
   RuntimeId:        1937
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9C80
*/
enum UIWidgetEventID
{
  UIWidgetEventID_None = 0,
  UIWidgetEventID_OnComplete = 30,
  UIWidgetEventID_Focus = 31,
  UIWidgetEventID_OnHeaderChanged = 32,
  UIWidgetEventID_OnDescriptionChanged = 33,
  UIWidgetEventID_OnMapChanged = 34,
  UIWidgetEventID_Clear = 35,
  UIWidgetEventID_Delete = 36,
  UIWidgetEventID_LThumb = 37,
  UIWidgetEventID_RThumb = 38,
  UIWidgetEventID_LTAB = 39,
  UIWidgetEventID_RTAB = 40,
  UIWidgetEventID_Update = 29,
  UIWidgetEventID_OnLarge = 41,
  UIWidgetEventID_TextEntered = 43,
  UIWidgetEventID_PlaySoundNavigate = 44,
  UIWidgetEventID_PlaySoundSelect = 45,
  UIWidgetEventID_PlaySoundPageSwap = 46,
  UIWidgetEventID_PlaySoundPopup = 47,
  UIWidgetEventID_PlaySoundBack = 48,
  UIWidgetEventID_PlaySoundNotification = 49,
  UIWidgetEventID_PlaySoundDashOpen = 50,
  UIWidgetEventID_PlaySoundDashClose = 51,
  UIWidgetEventID_PlaySoundAcceptChallenge = 52,
  UIWidgetEventID_OnComPressed = 53,
  UIWidgetEventID_OnSmall = 42,
  UIWidgetEventID_ToggledOff = 28,
  UIWidgetEventID_ToggledOn = 27,
  UIWidgetEventID_ToggleOff = 26,
  UIWidgetEventID_OnItemSelected = 1,
  UIWidgetEventID_OnItemHighlighted = 2,
  UIWidgetEventID_OnItemReleased = 3,
  UIWidgetEventID_OnItemUnhighlighted = 4,
  UIWidgetEventID_OnItemPressed = 5,
  UIWidgetEventID_OnItemOver = 6,
  UIWidgetEventID_OnItemOut = 7,
  UIWidgetEventID_OnToggle = 8,
  UIWidgetEventID_OnChanged = 9,
  UIWidgetEventID_OnButtonBarChanged = 10,
  UIWidgetEventID_EnterTop = 11,
  UIWidgetEventID_EnterBottom = 12,
  UIWidgetEventID_EnterAny = 13,
  UIWidgetEventID_SetIndex = 14,
  UIWidgetEventID_SetPercentage = 15,
  UIWidgetEventID_OnReachedTop = 16,
  UIWidgetEventID_OnReachedBottom = 17,
  UIWidgetEventID_OnNavigateLeft = 18,
  UIWidgetEventID_OnNavigateRight = 19,
  UIWidgetEventID_Show = 20,
  UIWidgetEventID_Hide = 21,
  UIWidgetEventID_OnShow = 22,
  UIWidgetEventID_OnHide = 23,
  UIWidgetEventID_Toggle = 24,
  UIWidgetEventID_ToggleOn = 25,
  UIWidgetEventID_OnComReleased = 54,
  UIWidgetEventID_NumItems = 55,
};

}
