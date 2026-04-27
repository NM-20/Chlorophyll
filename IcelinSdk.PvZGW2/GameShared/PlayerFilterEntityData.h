#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Entity/SubRealm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428497C0
   RuntimeId:        0DBC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C8F
   VfTable:          000000014225FC00
   Address (Base):   00000001430D7810
*/
#pragma pack(push, 8)
class PlayerFilterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  SubRealm SubRealm; /* 0x001C */
  FB_BOOLEAN InvertFilter; /* 0x0020 */
  FB_BOOLEAN ForwardToSpectators; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PlayerFilterEntityData) == 40);

}
