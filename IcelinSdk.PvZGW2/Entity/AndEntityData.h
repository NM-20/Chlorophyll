#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AAE8
   RuntimeId:        0829
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C00
   VfTable:          000000014220BF00
   Address (Base):   00000001430F09C0
*/
#pragma pack(push, 8)
class AndEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_UINT32 InputCount; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AndEntityData) == 32);

}
