#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZSaveDataSource.h>

namespace fb
{

/* TypeInfo (Array): 00000001428651C0
   RuntimeId:        2295
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A11
   VfTable:          0000000142351A00
   Address (Base):   00000001430D3F10
*/
#pragma pack(push, 8)
class PVZSaveGetValueEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  PVZSaveDataSource PVZSaveDataSource; /* 0x0020 */
  FB_CSTRING UniqueKey; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZSaveGetValueEntityData) == 56);

}
