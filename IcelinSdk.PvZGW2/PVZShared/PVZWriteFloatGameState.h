#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZWriteGameStateData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862758
   RuntimeId:        2080
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          127C
   VfTable:          0000000142343C38
   Address (Base):   00000001431088B0
*/
#pragma pack(push, 8)
class PVZWriteFloatGameState : public PVZWriteGameStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef GameState; /* 0x0018 */
  FB_FLOAT32 Value; /* 0x002C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZWriteFloatGameState) == 48);

}
