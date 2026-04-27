#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameObjectData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849280
   RuntimeId:        0D68
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DD0
   VfTable:          00000001422602B0
   Address (Base):   00000001431146D0
*/
#pragma pack(push, 8)
class UICombatAreaEntityData : public GameObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UICombatAreaAsset) Asset; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UICombatAreaEntityData) == 32);

}
