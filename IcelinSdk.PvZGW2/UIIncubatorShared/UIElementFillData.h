#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementColor.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementGradient.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UIElementBlendType.h>
#include <IcelinSdk.PvZGW2/GameShared/UIBlendMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876798
   RuntimeId:        2DD9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0672
   VfTable:          00000001423930D8
   Address (Base):   0000000143102F10
*/
#pragma pack(push, 16)
class UIElementFillData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 BackgroundAntiAliasingWidth; /* 0x0018 */
  char pad_001C[0x0004];
  UIElementColor BackgroundColor; /* 0x0020 */
  UIElementGradient BackgroundGradient; /* 0x0040 */
  UIElementColor OutlineColor; /* 0x00C0 */
  UIElementGradient OutlineGradient; /* 0x00E0 */
  FB_FLOAT32 OutlineAntiAliasingWidth; /* 0x0160 */
  UIElementBlendType BackgroundBlend; /* 0x0164 */
  UIBlendMode BackgroundBlendMode; /* 0x0168 */
  UIElementBlendType OutlineBlend; /* 0x016C */
  UIBlendMode OutlineBlendMode; /* 0x0170 */
  char pad_0174[0x0004];
  FB_CSTRING TextureId; /* 0x0178 */
  FB_HANDLE(class UIElementSlice9FillData) Slice9Fill; /* 0x0180 */
  FB_BOOLEAN DrawBackground; /* 0x0188 */
  FB_BOOLEAN UseBackgroundGradient; /* 0x0189 */
  FB_BOOLEAN UseBackgroundAntiAliasing; /* 0x018A */
  FB_BOOLEAN DrawOutline; /* 0x018B */
  FB_BOOLEAN UseOutlineGradient; /* 0x018C */
  FB_BOOLEAN UseOutlineAntiAliasing; /* 0x018D */
  char pad_018E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0190 */
#pragma pack(pop)

static_assert(sizeof(UIElementFillData) == 400);

}
