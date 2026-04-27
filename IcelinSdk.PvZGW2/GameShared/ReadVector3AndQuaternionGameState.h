#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ReadAntGameStateData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D400
   RuntimeId:        1109
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F64
   VfTable:          0000000142274238
   Address (Base):   0000000143111F10
*/
#pragma pack(push, 8)
class ReadVector3AndQuaternionGameState : public ReadAntGameStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef GameStateVec; /* 0x0018 */
  AntRef GameStateQuat; /* 0x002C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ReadVector3AndQuaternionGameState) == 64);

}
