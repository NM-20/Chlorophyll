#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>
#include <IcelinSdk.PvZGW2/PVZServer/AiTargetBehaviorType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285ECF8
   RuntimeId:        1D13
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          103D
   VfTable:          000000014231E158
   Address (Base):   000000014310C150
*/
#pragma pack(push, 8)
class HasTarget : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AiTargetBehaviorType TargetBehaviorType; /* 0x0010 */
  FB_BOOLEAN NavReachable; /* 0x0014 */
  char pad_0015[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(HasTarget) == 24);

}
