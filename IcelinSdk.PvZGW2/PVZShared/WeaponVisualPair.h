#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864248
   RuntimeId:        21BF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0885
   VfTable:          0000000142352868
   Address (Base):   0000000143108310
*/
#pragma pack(push, 8)
class WeaponVisualPair : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UnlockAssetBase) Weapon; /* 0x0010 */
  FB_HANDLE(class CustomizationTable) AddonVisualTable; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WeaponVisualPair) == 32);

}
