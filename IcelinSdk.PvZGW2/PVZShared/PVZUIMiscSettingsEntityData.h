#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>

namespace fb
{

/* TypeInfo (Array): 00000001428706B8
   RuntimeId:        29A9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A1C
   VfTable:          000000014236D818
   Address (Base):   00000001430E2AA0
*/
#pragma pack(push, 8)
class PVZUIMiscSettingsEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LocalPlayerId LocalPlayerId; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZUIMiscSettingsEntityData) == 32);

}
