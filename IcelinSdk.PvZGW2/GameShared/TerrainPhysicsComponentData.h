#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GamePhysicsComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BA90
   RuntimeId:        0FA6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D00
   VfTable:          0000000142268428
   Address (Base):   00000001430D6AF0
*/
#pragma pack(push, 16)
class TerrainPhysicsComponentData : public GamePhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(TerrainPhysicsComponentData) == 160);

}
