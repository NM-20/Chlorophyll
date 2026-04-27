#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863068
   RuntimeId:        20E4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F09
   VfTable:          0000000142353ED0
   Address (Base):   00000001430DA490
*/
#pragma pack(push, 8)
class PVZRollingWeaponData : public WeaponData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PVZCharacterRollingData) RollingData; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZRollingWeaponData) == 32);

}
