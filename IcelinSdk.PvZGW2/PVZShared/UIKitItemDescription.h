#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>
#include <IcelinSdk.PvZGW2/GameShared/UIHudIcon.h>
#include <IcelinSdk.PvZGW2/PVZShared/RarenessLevel.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871FE8
   RuntimeId:        2AFD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E75
   VfTable:          000000014236BD18
   Address (Base):   00000001430BF770
*/
#pragma pack(push, 8)
class UIKitItemDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0028 */
  FB_CSTRING UnlockName; /* 0x0030 */
  FB_CSTRING Description; /* 0x0038 */
  FB_CSTRING Category; /* 0x0040 */
  FB_CSTRING TexturePath; /* 0x0048 */
  FB_CSTRING IconTexturePath; /* 0x0050 */
  FB_CSTRING UnlockTexturePath; /* 0x0058 */
  UIHudIcon HudIcon; /* 0x0060 */
  RarenessLevel RarenessLevel; /* 0x0064 */
  FB_INT32 TeamId; /* 0x0068 */
  FB_BOOLEAN HiddenInProgression; /* 0x006C */
  FB_BOOLEAN NotExplicitelySelectable; /* 0x006D */
  char pad_006E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(UIKitItemDescription) == 112);

}
