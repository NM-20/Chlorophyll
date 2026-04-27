#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/BTree/ENodeState.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833FF8
   RuntimeId:        0187
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0852
   VfTable:          00000001421EA9A8
   Address (Base):   00000001431010B0
*/
#pragma pack(push, 8)
class MovementBehavior : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Timeout; /* 0x0010 */
  ENodeState ReturnValue; /* 0x0014 */
  FB_CSTRING Name; /* 0x0018 */
  FB_BOOLEAN FireAndForget; /* 0x0020 */
  FB_BOOLEAN UseTimeout; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MovementBehavior) == 40);

}
