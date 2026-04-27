#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864DF8
   RuntimeId:        225C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C78
   VfTable:          0000000142351C78
   Address (Base):   00000001430E5BC0
*/
#pragma pack(push, 8)
class WeaponProxyEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(enum WeaponSlot) Slots; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WeaponProxyEntityData) == 32);

}
