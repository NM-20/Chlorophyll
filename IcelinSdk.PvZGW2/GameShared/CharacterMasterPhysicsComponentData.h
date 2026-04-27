#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ControllablePhysicsComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DE00
   RuntimeId:        1191
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CFD
   VfTable:          0000000142273758
   Address (Base):   00000001430D0920
*/
#pragma pack(push, 16)
class CharacterMasterPhysicsComponentData : public ControllablePhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(CharacterMasterPhysicsComponentData) == 160);

}
