#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865320
   RuntimeId:        22AB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0999
   VfTable:          00000001423515F8
   Address (Base):   00000001430E5AA0
*/
#pragma pack(push, 8)
class PVZUnlockQueryEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 UnlockAssetIdentifier; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZUnlockQueryEntityData) == 32);

}
