#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/AntEventEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428626B8
   RuntimeId:        2076
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B9E
   VfTable:          0000000142343B38
   Address (Base):   00000001430E8320
*/
#pragma pack(push, 8)
class PVZWeaponAntEventEntityData : public AntEventEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZWeaponAntEventEntityData) == 56);

}
