#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/SupplyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863AA8
   RuntimeId:        2147
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D2C
   VfTable:          0000000142353628
   Address (Base):   00000001430E7720
*/
#pragma pack(push, 16)
class PVZSupplySphereComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  SupplyData SupplyData; /* 0x0070 */
  FB_HANDLE(class WeaponUnlockAsset) WeaponUnlock; /* 0x0088 */
  FB_INT32 HealingInterest; /* 0x0090 */
  FB_BOOLEAN Enabled; /* 0x0094 */
  char pad_0095[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(PVZSupplySphereComponentData) == 160);

}
