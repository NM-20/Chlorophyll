#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428656F8
   RuntimeId:        22E5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A5D
   VfTable:          0000000142351348
   Address (Base):   00000001430E59E0
*/
#pragma pack(push, 8)
class ClientTimeChallengeEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING TrialId; /* 0x0018 */
  FB_FLOAT32 Duration; /* 0x0020 */
  FB_BOOLEAN Succeeded; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ClientTimeChallengeEntityData) == 40);

}
