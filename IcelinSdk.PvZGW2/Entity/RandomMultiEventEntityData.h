#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283ACA0
   RuntimeId:        0843
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BFF
   VfTable:          000000014220BD98
   Address (Base):   00000001430F0720
*/
#pragma pack(push, 8)
class RandomMultiEventEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(FB_FLOAT32) RandomEventWeight; /* 0x0020 */
  FB_BOOLEAN UniformDistribution; /* 0x0028 */
  FB_BOOLEAN DisableOutputOnTrigger; /* 0x0029 */
  FB_BOOLEAN ResetOutputsWhenAllHasTriggered; /* 0x002A */
  FB_BOOLEAN TrueRandom; /* 0x002B */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(RandomMultiEventEntityData) == 48);

}
