#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872088
   RuntimeId:        2B07
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E6E
   VfTable:          000000014236BDA8
   Address (Base):   00000001430F5530
*/
#pragma pack(push, 8)
class UIVehicleDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0028 */
  FB_CSTRING Description; /* 0x0030 */
  FB_CSTRING TexturePath; /* 0x0038 */
  FB_CSTRING FlyUpIconId; /* 0x0040 */
  FB_CSTRING FlyDownIconId; /* 0x0048 */
  FB_CSTRING SecondaryWeaponIconId; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UIVehicleDescription) == 88);

}
