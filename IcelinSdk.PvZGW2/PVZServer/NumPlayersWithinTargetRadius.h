#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>
#include <IcelinSdk.PvZGW2/PVZServer/AiTargetBehaviorType.h>
#include <IcelinSdk.PvZGW2/PVZShared/CompareType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285ED78
   RuntimeId:        1D1B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          104C
   VfTable:          000000014231E258
   Address (Base):   000000014310BFD0
*/
#pragma pack(push, 8)
class NumPlayersWithinTargetRadius : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AiTargetBehaviorType TargetBehaviorType; /* 0x0010 */
  CompareType CompareType; /* 0x0014 */
  FB_INT32 Value; /* 0x0018 */
  FB_FLOAT32 Radius; /* 0x001C */
  FB_BOOLEAN IncludeEnemies; /* 0x0020 */
  FB_BOOLEAN IncludeFriendlies; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(NumPlayersWithinTargetRadius) == 40);

}
