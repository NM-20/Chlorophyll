#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/WriteAntGameStateData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D4E0
   RuntimeId:        1117
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F62
   VfTable:          00000001422741C0
   Address (Base):   0000000143111C70
*/
#pragma pack(push, 16)
class WriteVector3TransformGameState : public WriteAntGameStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef GameState; /* 0x0018 */
  char pad_002C[0x0004];
  LinearTransform Value; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(WriteVector3TransformGameState) == 112);

}
