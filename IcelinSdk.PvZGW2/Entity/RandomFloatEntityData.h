#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283ACC0
   RuntimeId:        0845
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C8D
   VfTable:          000000014220BD28
   Address (Base):   00000001430F06C0
*/
#pragma pack(push, 8)
class RandomFloatEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_FLOAT32 Min; /* 0x001C */
  FB_FLOAT32 Max; /* 0x0020 */
  FB_BOOLEAN TrueRandom; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(RandomFloatEntityData) == 40);

}
