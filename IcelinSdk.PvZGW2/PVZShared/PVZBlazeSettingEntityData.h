#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865698
   RuntimeId:        22DF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C1D
   VfTable:          00000001423511C0
   Address (Base):   00000001430E62E0
*/
#pragma pack(push, 8)
class PVZBlazeSettingEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN OptionBool; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZBlazeSettingEntityData) == 32);

}
