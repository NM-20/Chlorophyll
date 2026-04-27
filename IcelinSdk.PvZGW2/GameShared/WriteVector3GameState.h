#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/WriteAntGameStateData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D4C0
   RuntimeId:        1115
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F5E
   VfTable:          0000000142274170
   Address (Base):   0000000143111CD0
*/
#pragma pack(push, 16)
class WriteVector3GameState : public WriteAntGameStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef GameState; /* 0x0018 */
  char pad_002C[0x0004];
  Vec3 Value; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(WriteVector3GameState) == 64);

}
