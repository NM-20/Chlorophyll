#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ReadAntGameStateData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D3A0
   RuntimeId:        1103
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F66
   VfTable:          00000001422742D8
   Address (Base):   0000000143112030
*/
#pragma pack(push, 8)
class ReadVector3GameState : public ReadAntGameStateData
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

static_assert(sizeof(ReadVector3GameState) == 48);

}
