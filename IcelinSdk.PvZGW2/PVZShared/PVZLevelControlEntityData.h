#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865C98
   RuntimeId:        233F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A9A
   VfTable:          0000000142350A48
   Address (Base):   00000001430D4E10
*/
#pragma pack(push, 8)
class PVZLevelControlEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING LevelToLoad; /* 0x0018 */
  FB_CSTRING ClientLevelToLoad; /* 0x0020 */
  FB_CSTRING InclusionOptions; /* 0x0028 */
  FB_CSTRING ClientInclusionOptions; /* 0x0030 */
  FB_CSTRING StartPoint; /* 0x0038 */
  FB_CSTRING LoadScreen_GameMode; /* 0x0040 */
  FB_CSTRING LoadScreen_LevelName; /* 0x0048 */
  FB_CSTRING LoadScreen_LevelDescription; /* 0x0050 */
  FB_BOOLEAN CheckSinglePlayerLevelInstalled; /* 0x0058 */
  FB_BOOLEAN ForceReloadResources; /* 0x0059 */
  char pad_005A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PVZLevelControlEntityData) == 96);

}
