#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeFloatProvider.h>
#include <IcelinSdk.PvZGW2/PVZServer/AiTargetBehaviorType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F658
   RuntimeId:        1DA9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10D1
   VfTable:          000000014231D978
   Address (Base):   000000014310A5F0
*/
#pragma pack(push, 8)
class RangeToTargetFloatProvider : public PVZBTreeFloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AiTargetBehaviorType TargetBehaviorType; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(RangeToTargetFloatProvider) == 24);

}
