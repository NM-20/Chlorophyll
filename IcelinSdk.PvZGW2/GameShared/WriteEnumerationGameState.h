#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/WriteAntGameStateData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D420
   RuntimeId:        110B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F5B
   VfTable:          0000000142274288
   Address (Base):   0000000143111EB0
*/
#pragma pack(push, 8)
class WriteEnumerationGameState : public WriteAntGameStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef GameState; /* 0x0018 */
  FB_INT32 Value; /* 0x002C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(WriteEnumerationGameState) == 48);

}
