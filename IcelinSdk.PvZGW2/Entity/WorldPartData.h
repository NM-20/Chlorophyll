#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PrefabBlueprint.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C3D8
   RuntimeId:        09AA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          078D
   VfTable:          00000001422136F0
   Address (Base):   00000001430EEB00
*/
#pragma pack(push, 8)
class WorldPartData : public PrefabBlueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_GUID HackToSolveRealTimeTweakingIssue; /* 0x0050 */
  FB_BOOLEAN Enabled; /* 0x0060 */
  FB_BOOLEAN UseDeferredEntityCreation; /* 0x0061 */
  char pad_0062[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(WorldPartData) == 104);

}
