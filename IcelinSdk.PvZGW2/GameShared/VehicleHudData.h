#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/UIHudIcon.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CE58
   RuntimeId:        10C0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAEC0
   Default Value:    000000014284CE70
*/
#pragma pack(push, 16)
struct VehicleHudData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 CustomizationOffset; /* 0x0000 */
  FB_HANDLE(class VehicleCustomizationAsset) Customization; /* 0x0010 */
  UIHudIcon MinimapIcon; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING IconName; /* 0x0020 */
  FB_HANDLE(class TextureAsset) Texture; /* 0x0028 */
  FB_UINT32 VehicleItemHash; /* 0x0030 */
  FB_BOOLEAN RotateInMap; /* 0x0034 */
  FB_BOOLEAN ShowHealth; /* 0x0035 */
  char pad_0036[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(VehicleHudData) == 64);

}
