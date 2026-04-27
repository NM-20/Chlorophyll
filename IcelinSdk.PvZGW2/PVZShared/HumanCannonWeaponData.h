#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869858
   RuntimeId:        24CD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F00
   VfTable:          0000000142355A60
   Address (Base):   00000001430D9B30
*/
#pragma pack(push, 8)
class HumanCannonWeaponData : public WeaponData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ForwardForce; /* 0x0018 */
  FB_FLOAT32 UpwardForce; /* 0x001C */
  FB_FLOAT32 AutoTriggerTime; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(HumanCannonWeaponData) == 40);

}
