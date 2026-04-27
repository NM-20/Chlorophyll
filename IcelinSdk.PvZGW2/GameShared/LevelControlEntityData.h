#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428494E0
   RuntimeId:        0D8E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AB8
   VfTable:          0000000142260038
   Address (Base):   00000001430EE6E0
*/
#pragma pack(push, 8)
class LevelControlEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING LevelToLoad; /* 0x0018 */
  FB_CSTRING InclusionOptions; /* 0x0020 */
  FB_CSTRING StartPoint; /* 0x0028 */
  FB_BOOLEAN RollCredits; /* 0x0030 */
  FB_BOOLEAN DoPersistentSave; /* 0x0031 */
  FB_BOOLEAN CheckSinglePlayerLevelInstalled; /* 0x0032 */
  FB_BOOLEAN ForceReloadResources; /* 0x0033 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(LevelControlEntityData) == 56);

}
