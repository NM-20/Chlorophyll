#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GamePhysicsComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E788
   RuntimeId:        120D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CFC
   VfTable:          0000000142272FC0
   Address (Base):   00000001430ECAC0
*/
#pragma pack(push, 16)
class ControllablePhysicsComponentData : public GamePhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(ControllablePhysicsComponentData) == 160);

}
