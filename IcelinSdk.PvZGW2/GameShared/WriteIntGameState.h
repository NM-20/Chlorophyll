#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/WriteAntGameStateData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D460
   RuntimeId:        110F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F5F
   VfTable:          00000001422741E8
   Address (Base):   0000000143111DF0
*/
#pragma pack(push, 8)
class WriteIntGameState : public WriteAntGameStateData
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

static_assert(sizeof(WriteIntGameState) == 48);

}
