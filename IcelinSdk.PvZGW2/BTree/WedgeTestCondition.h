#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/AIBehaviorTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833FD8
   RuntimeId:        0185
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1077
   VfTable:          00000001421EA9B8
   Address (Base):   000000014311C350
*/
#pragma pack(push, 8)
class WedgeTestCondition : public AIBehaviorTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityProvider) Target; /* 0x0010 */
  FB_HANDLE(class FloatProvider) AngleSpan; /* 0x0018 */
  FB_HANDLE(class FloatProvider) AngleOffset; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(WedgeTestCondition) == 40);

}
