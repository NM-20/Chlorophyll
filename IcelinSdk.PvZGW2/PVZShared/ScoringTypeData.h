#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatEvent.h>
#include <IcelinSdk.PvZGW2/GameShared/ScoringVisibilityType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428699E8
   RuntimeId:        24E5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E34
   VfTable:          0000000142355990
   Address (Base):   0000000143107590
*/
#pragma pack(push, 8)
class ScoringTypeData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  StatEvent Measuring; /* 0x0010 */
  char pad_0014[0x0004];
  FB_HANDLE(class StatsCategoryBaseData) ParamX; /* 0x0018 */
  FB_HANDLE(class StatsCategoryBaseData) ParamY; /* 0x0020 */
  FB_FLOAT32 Limit; /* 0x0028 */
  char pad_002C[0x0004];
  FB_CSTRING DescriptionSid; /* 0x0030 */
  ScoringVisibilityType VisibilityType; /* 0x0038 */
  char pad_003C[0x0004];
  FB_STDARRAY(struct BucketScoreData) BucketScores; /* 0x0040 */
  FB_UINT32 Identifier; /* 0x0048 */
  FB_BOOLEAN ShowForTeam; /* 0x004C */
  char pad_004D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ScoringTypeData) == 80);

}
