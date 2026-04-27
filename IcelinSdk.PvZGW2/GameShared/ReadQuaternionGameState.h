#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ReadAntGameStateData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D3E0
   RuntimeId:        1107
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F67
   VfTable:          0000000142274300
   Address (Base):   0000000143111F70
*/
#pragma pack(push, 8)
class ReadQuaternionGameState : public ReadAntGameStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef GameState; /* 0x0018 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ReadQuaternionGameState) == 48);

}
