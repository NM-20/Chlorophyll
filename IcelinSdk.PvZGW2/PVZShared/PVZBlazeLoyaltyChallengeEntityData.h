#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FC70
   RuntimeId:        292A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A6C
   VfTable:          000000014236DE78
   Address (Base):   00000001430E3F40
*/
#pragma pack(push, 8)
class PVZBlazeLoyaltyChallengeEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZBlazeLoyaltyChallengeEntityData) == 24);

}
