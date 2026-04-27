#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DD60
   RuntimeId:        1187
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D3F
   VfTable:          00000001422737E0
   Address (Base):   00000001430D6370
*/
#pragma pack(push, 16)
class CharacterPhysicsComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class CharacterPhysicsData) CharacterPhysics; /* 0x0070 */
  FB_BOOLEAN EnableCollisionOnSpawn; /* 0x0078 */
  char pad_0079[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(CharacterPhysicsComponentData) == 128);

}
