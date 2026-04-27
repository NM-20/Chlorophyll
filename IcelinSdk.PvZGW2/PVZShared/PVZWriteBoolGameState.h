#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZWriteGameStateData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862798
   RuntimeId:        2084
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          127E
   VfTable:          0000000142343C10
   Address (Base):   00000001431087F0
*/
#pragma pack(push, 8)
class PVZWriteBoolGameState : public PVZWriteGameStateData
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

static_assert(sizeof(PVZWriteBoolGameState) == 48);

}
