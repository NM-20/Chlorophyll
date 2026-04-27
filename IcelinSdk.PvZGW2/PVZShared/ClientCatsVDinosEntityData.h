#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 00000001428656B8
   RuntimeId:        22E1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09CA
   VfTable:          0000000142351380
   Address (Base):   00000001430E5E60
*/
#pragma pack(push, 8)
class ClientCatsVDinosEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Duration; /* 0x0018 */
  FB_INT32 EndType; /* 0x001C */
  TeamId WinningTeamId; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ClientCatsVDinosEntityData) == 40);

}
