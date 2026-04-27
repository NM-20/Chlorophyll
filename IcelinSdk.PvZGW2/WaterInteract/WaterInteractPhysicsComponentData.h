#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GamePhysicsComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876DF8
   RuntimeId:        2E2E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D02
   VfTable:          0000000142395C08
   Address (Base):   00000001430E0040
*/
#pragma pack(push, 16)
class WaterInteractPhysicsComponentData : public GamePhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(WaterInteractPhysicsComponentData) == 160);

}
