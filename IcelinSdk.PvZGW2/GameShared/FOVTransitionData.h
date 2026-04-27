#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/GameShared/FOVTransitionType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DBC0
   RuntimeId:        116D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DD9
   VfTable:          0000000142273A58
   Address (Base):   00000001431119D0
*/
#pragma pack(push, 8)
class FOVTransitionData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FOVTransitionType TransitionType; /* 0x0010 */
  FB_FLOAT32 Shape; /* 0x0014 */
  FB_FLOAT32 StartDelay; /* 0x0018 */
  FB_FLOAT32 StartJump; /* 0x001C */
  FB_FLOAT32 EndEarly; /* 0x0020 */
  FB_BOOLEAN Invert; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(FOVTransitionData) == 40);

}
