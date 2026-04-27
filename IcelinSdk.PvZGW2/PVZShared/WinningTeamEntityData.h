#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871748
   RuntimeId:        2A77
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AD3
   VfTable:          000000014236C840
   Address (Base):   00000001430E36A0
*/
#pragma pack(push, 8)
class WinningTeamEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(WinningTeamEntityData) == 24);

}
