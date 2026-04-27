#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/MovementActionData.h>
#include <IcelinSdk.PvZGW2/GameShared/SimpleMovementActionTimeData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BD38
   RuntimeId:        0FD0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E5C
   VfTable:          00000001422680F0
   Address (Base):   00000001430ED480
*/
#pragma pack(push, 8)
class SimpleMovementActionBaseData : public MovementActionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  SimpleMovementActionTimeData StartTimeInfo; /* 0x0010 */
  SimpleMovementActionTimeData RunTimeInfo; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SimpleMovementActionBaseData) == 32);

}
