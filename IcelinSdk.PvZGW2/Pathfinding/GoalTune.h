#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428506D8
   RuntimeId:        13A9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07EB
   VfTable:          000000014227C7C0
   Address (Base):   00000001430FC550
*/
#pragma pack(push, 8)
class GoalTune : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 preferredTurningRadius; /* 0x0018 */
  FB_BOOLEAN useCircularApproach; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(GoalTune) == 32);

}
