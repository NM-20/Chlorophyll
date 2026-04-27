#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AC80
   RuntimeId:        0841
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C2F
   VfTable:          000000014220BD60
   Address (Base):   00000001430F0780
*/
#pragma pack(push, 8)
class RandomEventEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_INT32 Probability; /* 0x001C */
  FB_BOOLEAN RandomizeFirstOnly; /* 0x0020 */
  FB_BOOLEAN AutoStart; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(RandomEventEntityData) == 40);

}
