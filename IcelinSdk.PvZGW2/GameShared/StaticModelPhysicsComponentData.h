#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GamePhysicsComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B990
   RuntimeId:        0F96
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CF8
   VfTable:          0000000142268568
   Address (Base):   00000001430D6BB0
*/
#pragma pack(push, 16)
class StaticModelPhysicsComponentData : public GamePhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(StaticModelPhysicsComponentData) == 160);

}
