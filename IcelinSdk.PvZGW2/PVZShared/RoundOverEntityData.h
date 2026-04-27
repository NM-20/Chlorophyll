#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865060
   RuntimeId:        227F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AAD
   VfTable:          0000000142351BF8
   Address (Base):   00000001431080D0
*/
#pragma pack(push, 8)
class RoundOverEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TeamId Team; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(RoundOverEntityData) == 32);

}
