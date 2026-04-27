#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870CE0
   RuntimeId:        2A01
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C15
   VfTable:          000000014236CF08
   Address (Base):   00000001430E3340
*/
#pragma pack(push, 8)
class UIUserInfoEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LocalPlayerId LocalPlayerIdOverride; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIUserInfoEntityData) == 32);

}
