#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870698
   RuntimeId:        29A7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A4A
   VfTable:          000000014236D8F8
   Address (Base):   00000001430E2B00
*/
#pragma pack(push, 8)
class PVZUIControlSettingsEntityData : public EntityData
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

static_assert(sizeof(PVZUIControlSettingsEntityData) == 32);

}
