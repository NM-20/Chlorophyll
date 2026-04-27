#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GamePhysicsComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DAF8
   RuntimeId:        283A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D03
   VfTable:          000000014236EE48
   Address (Base):   00000001430D3070
*/
#pragma pack(push, 16)
class ExplosionPackPhysicsComponentData : public GamePhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(ExplosionPackPhysicsComponentData) == 160);

}
