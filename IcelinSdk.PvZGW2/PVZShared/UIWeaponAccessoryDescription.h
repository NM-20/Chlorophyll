#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>
#include <IcelinSdk.PvZGW2/PVZShared/RarenessLevel.h>

namespace fb
{

/* TypeInfo (Array): 00000001428720A8
   RuntimeId:        2B09
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E65
   VfTable:          000000014236BD68
   Address (Base):   00000001430BF710
*/
#pragma pack(push, 8)
class UIWeaponAccessoryDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0028 */
  FB_CSTRING Description; /* 0x0030 */
  FB_CSTRING Category; /* 0x0038 */
  FB_UINT32 WeaponId; /* 0x0040 */
  char pad_0044[0x0004];
  FB_CSTRING TexturePath; /* 0x0048 */
  FB_CSTRING IconTexturePath; /* 0x0050 */
  FB_CSTRING UnlockTexturePath; /* 0x0058 */
  RarenessLevel RarenessLevel; /* 0x0060 */
  FB_FLOAT32 StatDamage; /* 0x0064 */
  FB_FLOAT32 StatAccuracy; /* 0x0068 */
  FB_FLOAT32 StatMobility; /* 0x006C */
  FB_FLOAT32 StatRange; /* 0x0070 */
  FB_FLOAT32 StatHandling; /* 0x0074 */
  FB_INT32 TeamId; /* 0x0078 */
  FB_BOOLEAN CoreAccessory; /* 0x007C */
  FB_BOOLEAN HiddenInProgression; /* 0x007D */
  char pad_007E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(UIWeaponAccessoryDescription) == 128);

}
