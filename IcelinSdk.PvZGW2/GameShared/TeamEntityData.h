#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 00000001428491E0
   RuntimeId:        0D5E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B95
   VfTable:          0000000142260420
   Address (Base):   00000001430D7750
*/
#pragma pack(push, 8)
class TeamEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TeamData) Team; /* 0x0018 */
  TeamId Id; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TeamEntityData) == 40);

}
