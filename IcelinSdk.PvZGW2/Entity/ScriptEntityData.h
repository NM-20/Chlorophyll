#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A908
   RuntimeId:        080B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C01
   VfTable:          000000014220C0F8
   Address (Base):   00000001430F0B40
*/
#pragma pack(push, 8)
class ScriptEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Code; /* 0x0018 */
  Realm Realm; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ScriptEntityData) == 40);

}
