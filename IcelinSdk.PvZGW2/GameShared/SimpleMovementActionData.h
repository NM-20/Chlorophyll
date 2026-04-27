#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/SimpleMovementActionBaseData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BD78
   RuntimeId:        0FD4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E5E
   VfTable:          00000001422680C8
   Address (Base):   0000000143112D50
*/
#pragma pack(push, 8)
class SimpleMovementActionData : public SimpleMovementActionBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Level; /* 0x0020 */
  FB_INT32 Action; /* 0x0024 */
  FB_INT32 SpecialAnimationIndex; /* 0x0028 */
  FB_BOOLEAN Teleport; /* 0x002C */
  FB_BOOLEAN Respawn; /* 0x002D */
  char pad_002E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SimpleMovementActionData) == 48);

}
