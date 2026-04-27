#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GamePhysicsComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AEC8
   RuntimeId:        0F01
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CFA
   VfTable:          0000000142262588
   Address (Base):   00000001430D7330
*/
#pragma pack(push, 16)
class StaticModelGroupPhysicsComponentData : public GamePhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(StaticModelGroupPhysicsComponentData) == 160);

}
