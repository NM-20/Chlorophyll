#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851A88
   RuntimeId:        14CC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B0E
   VfTable:          000000014227F048
   Address (Base):   00000001430BC860
*/
#pragma pack(push, 16)
class GamePhysicsEntityData : public GameComponentEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PhysicsEntityData) PhysicsData; /* 0x0080 */
  char pad_0088[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(GamePhysicsEntityData) == 144);

}
