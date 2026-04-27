#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/WriteAntGameStateData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D500
   RuntimeId:        1119
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F5D
   VfTable:          00000001422740D8
   Address (Base):   0000000143111C10
*/
#pragma pack(push, 16)
class WriteVector3AndQuaternionGameState : public WriteAntGameStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef GameStateVec; /* 0x0018 */
  char pad_002C[0x0004];
  LinearTransform Value; /* 0x0030 */
  AntRef GameStateQuat; /* 0x0070 */
  char pad_0084[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(WriteVector3AndQuaternionGameState) == 144);

}
