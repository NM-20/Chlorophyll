#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/UIBlendMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871E00
   RuntimeId:        2AE1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BA4
   VfTable:          000000014236BEC0
   Address (Base):   00000001430E1F00
*/
#pragma pack(push, 16)
class UIElementBitmapMaskEntityData : public UIElementEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING DynamicTextureId; /* 0x00E0 */
  FB_CSTRING MaskTextureId; /* 0x00E8 */
  FB_FLOAT32 AlphaTest; /* 0x00F0 */
  UIBlendMode BlendMode; /* 0x00F4 */
  FB_BOOLEAN InvertAlphaTest; /* 0x00F8 */
  FB_BOOLEAN UseColorAsOverlay; /* 0x00F9 */
  FB_BOOLEAN OverrideBlendMode; /* 0x00FA */
  char pad_00FB[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(UIElementBitmapMaskEntityData) == 256);

}
