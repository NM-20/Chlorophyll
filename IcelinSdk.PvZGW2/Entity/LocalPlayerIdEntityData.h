#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B8C8
   RuntimeId:        08FE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A59
   VfTable:          000000014220AB60
   Address (Base):   00000001430F0C60
*/
#pragma pack(push, 8)
class LocalPlayerIdEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  LocalPlayerId DefaultValue; /* 0x001C */
  LocalPlayerId In; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(LocalPlayerIdEntityData) == 40);

}
