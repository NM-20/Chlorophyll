#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864E58
   RuntimeId:        2262
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A6B
   VfTable:          0000000142351C30
   Address (Base):   00000001430E5B60
*/
#pragma pack(push, 8)
class ScoreInfoEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TeamId TeamId; /* 0x0018 */
  FB_UINT32 PlayerIndex; /* 0x001C */
  FB_UINT32 NumBoasts; /* 0x0020 */
  FB_UINT32 BoastPlayerID; /* 0x0024 */
  FB_BOOLEAN UpdateScores; /* 0x0028 */
  FB_BOOLEAN FetchBoastData; /* 0x0029 */
  FB_BOOLEAN UseWeaponNameForAINames; /* 0x002A */
  char pad_002B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ScoreInfoEntityData) == 48);

}
