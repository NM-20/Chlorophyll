#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>
#include <IcelinSdk.PvZGW2/PVZShared/RarenessLevel.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871FC8
   RuntimeId:        2AFB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E62
   VfTable:          000000014236BD48
   Address (Base):   00000001430BDD70
*/
#pragma pack(push, 8)
class UIWeaponDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0028 */
  FB_CSTRING NamePlural; /* 0x0030 */
  FB_CSTRING UnlockName; /* 0x0038 */
  FB_CSTRING Description; /* 0x0040 */
  FB_CSTRING Category; /* 0x0048 */
  FB_CSTRING TexturePath; /* 0x0050 */
  FB_CSTRING IconTexturePath; /* 0x0058 */
  FB_CSTRING IconId; /* 0x0060 */
  FB_CSTRING ActiveIconId; /* 0x0068 */
  FB_CSTRING UnlockTexturePath; /* 0x0070 */
  FB_CSTRING Ammo; /* 0x0078 */
  FB_CSTRING RateOfFire; /* 0x0080 */
  FB_CSTRING AmmoType; /* 0x0088 */
  FB_CSTRING Range; /* 0x0090 */
  FB_FLOAT32 StatDamage; /* 0x0098 */
  FB_FLOAT32 StatAccuracy; /* 0x009C */
  FB_FLOAT32 StatMobility; /* 0x00A0 */
  FB_FLOAT32 StatRange; /* 0x00A4 */
  FB_FLOAT32 StatHandling; /* 0x00A8 */
  RarenessLevel RarenessLevel; /* 0x00AC */
  FB_INT32 TeamId; /* 0x00B0 */
  FB_BOOLEAN DisplayAmmoCount; /* 0x00B4 */
  FB_BOOLEAN HasTutorial; /* 0x00B5 */
  FB_BOOLEAN IsHiddenWhenLocked; /* 0x00B6 */
  FB_BOOLEAN FireModeSingle; /* 0x00B7 */
  FB_BOOLEAN FireModeBurst; /* 0x00B8 */
  FB_BOOLEAN FireModeAuto; /* 0x00B9 */
  FB_BOOLEAN HiddenInProgression; /* 0x00BA */
  char pad_00BB[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(UIWeaponDescription) == 192);

}
