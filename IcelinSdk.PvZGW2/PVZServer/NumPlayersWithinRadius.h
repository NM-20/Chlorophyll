#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>
#include <IcelinSdk.PvZGW2/PVZShared/CompareType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F538
   RuntimeId:        1D97
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          103F
   VfTable:          000000014231D938
   Address (Base):   000000014310A890
*/
#pragma pack(push, 8)
class NumPlayersWithinRadius : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  CompareType CompareType; /* 0x0010 */
  FB_INT32 Value; /* 0x0014 */
  FB_FLOAT32 Radius; /* 0x0018 */
  FB_BOOLEAN IncludeEnemies; /* 0x001C */
  FB_BOOLEAN IncludeFriendlies; /* 0x001D */
  char pad_001E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(NumPlayersWithinRadius) == 32);

}
