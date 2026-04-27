#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/PVZDifficultyGameType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865DE8
   RuntimeId:        2351
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A0D
   VfTable:          0000000142350900
   Address (Base):   00000001430E6460
*/
#pragma pack(push, 8)
class PVZDifficultyInfoEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZDifficultyGameType GameType; /* 0x0018 */
  FB_UINT32 GameTypeDifficultyIndex; /* 0x001C */
  FB_UINT32 DifficultyIndexCastIn; /* 0x0020 */
  FB_FLOAT32 OverrideScoreMultiplier; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZDifficultyInfoEntityData) == 40);

}
