#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/PVZDifficultyGameType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870C80
   RuntimeId:        29FB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A76
   VfTable:          000000014236CFB0
   Address (Base):   00000001430E38E0
*/
#pragma pack(push, 8)
class UICoopGameAttributeEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Difficulty; /* 0x0018 */
  PVZDifficultyGameType DifficultyGameType; /* 0x001C */
  FB_CSTRING Level; /* 0x0020 */
  FB_CSTRING GameModeVariant; /* 0x0028 */
  FB_INT32 Permissions; /* 0x0030 */
  FB_INT32 SkipToWave; /* 0x0034 */
  FB_BOOLEAN TOD; /* 0x0038 */
  FB_BOOLEAN EnableReadyUpdateSync; /* 0x0039 */
  char pad_003A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UICoopGameAttributeEntityData) == 64);

}
