#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/PVZShared/ScoringBucket.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864F98
   RuntimeId:        2276
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C1E
   VfTable:          0000000142351A98
   Address (Base):   00000001430D3D30
*/
#pragma pack(push, 8)
class ScoringEventListenerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  ScoringBucket Bucket; /* 0x001C */
  FB_UINT32 ScoringTypeIdentifier; /* 0x0020 */
  FB_BOOLEAN UseBucket; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ScoringEventListenerEntityData) == 40);

}
