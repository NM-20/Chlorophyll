#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/DataProviders/ProviderEntityUpdateMode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428345B8
   RuntimeId:        01E8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AE7
   VfTable:          00000001421ECEA8
   Address (Base):   00000001430D8050
*/
#pragma pack(push, 8)
class ProviderEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  ProviderEntityUpdateMode UpdateMode; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ProviderEntityData) == 32);

}
