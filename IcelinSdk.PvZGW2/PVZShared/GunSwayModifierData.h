#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/PVZShared/GunSwayStanceZoomModifierData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286E270
   RuntimeId:        2872
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07E7
   VfTable:          000000014236E7A8
   Address (Base):   0000000143105670
*/
#pragma pack(push, 8)
class GunSwayModifierData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  GunSwayStanceZoomModifierData StandZoomModifier; /* 0x0018 */
  GunSwayStanceZoomModifierData StandNoZoomModifier; /* 0x005C */
  GunSwayStanceZoomModifierData CrouchZoomModifier; /* 0x00A0 */
  GunSwayStanceZoomModifierData CrouchNoZoomModifier; /* 0x00E4 */
  GunSwayStanceZoomModifierData ProneZoomModifier; /* 0x0128 */
  GunSwayStanceZoomModifierData ProneNoZoomModifier; /* 0x016C */
  FB_BOOLEAN OnlyInSupportedShooting; /* 0x01B0 */
  char pad_01B1[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01B8 */
#pragma pack(pop)

static_assert(sizeof(GunSwayModifierData) == 440);

}
