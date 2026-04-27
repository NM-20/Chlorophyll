#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponFiringData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869838
   RuntimeId:        24CB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DD4
   VfTable:          0000000142355A80
   Address (Base):   00000001430CE570
*/
#pragma pack(push, 8)
class PVZWeaponFiringData : public WeaponFiringData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 StopWhenFiredTime; /* 0x0060 */
  FB_BOOLEAN UsePrevWeaponZoomAndFOV; /* 0x0064 */
  FB_BOOLEAN SetZoomLevelOnChange; /* 0x0065 */
  char pad_0066[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(PVZWeaponFiringData) == 104);

}
