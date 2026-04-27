#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/WriteAntGameStateData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D480
   RuntimeId:        1111
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F5C
   VfTable:          0000000142274210
   Address (Base):   0000000143111D90
*/
#pragma pack(push, 8)
class WriteBoolGameState : public WriteAntGameStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef GameState; /* 0x0018 */
  FB_BOOLEAN Value; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(WriteBoolGameState) == 48);

}
