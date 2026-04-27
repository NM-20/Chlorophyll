#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>
#include <IcelinSdk.PvZGW2/PVZShared/CompareType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EF58
   RuntimeId:        1D39
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1065
   VfTable:          000000014231DEF8
   Address (Base):   000000014310BA30
*/
#pragma pack(push, 8)
class HasInterest : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Interest; /* 0x0010 */
  FB_INT32 NumInterested; /* 0x0014 */
  CompareType NumInterestedCompareType; /* 0x0018 */
  FB_FLOAT32 MaxDistance; /* 0x001C */
  FB_BOOLEAN Valid; /* 0x0020 */
  FB_BOOLEAN InsideRadius; /* 0x0021 */
  FB_BOOLEAN IncludeFriendlies; /* 0x0022 */
  FB_BOOLEAN IncludeEnemies; /* 0x0023 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(HasInterest) == 40);

}
