#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870F60
   RuntimeId:        2A1B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BF0
   VfTable:          000000014236CD80
   Address (Base):   00000001430E3160
*/
#pragma pack(push, 8)
class UIStatEventEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(enum StatEvent) StatEvents; /* 0x0018 */
  FB_STDARRAY(enum ScoringBucket) Buckets; /* 0x0020 */
  FB_FLOAT32 QueueTime; /* 0x0028 */
  FB_BOOLEAN ShouldAccumulate; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIStatEventEntityData) == 48);

}
