#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AC40
   RuntimeId:        083D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BEF
   VfTable:          000000014220BE08
   Address (Base):   00000001430F07E0
*/
#pragma pack(push, 8)
class CountDownEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 StartValue; /* 0x0018 */
  Realm Realm; /* 0x001C */
  FB_BOOLEAN RunOnce; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(CountDownEntityData) == 40);

}
