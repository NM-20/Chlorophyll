#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B5A8
   RuntimeId:        0F5F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09FE
   VfTable:          00000001422689B0
   Address (Base):   00000001430ECD00
*/
#pragma pack(push, 8)
class AnimationSignalEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef Signal; /* 0x0018 */
  AntRef IntGameState; /* 0x002C */
  AntRef FloatGameState; /* 0x0040 */
  FB_INT32 ValueInt; /* 0x0054 */
  FB_FLOAT32 ValueFloat; /* 0x0058 */
  FB_BOOLEAN Reset; /* 0x005C */
  FB_BOOLEAN Continuous; /* 0x005D */
  char pad_005E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(AnimationSignalEntityData) == 96);

}
