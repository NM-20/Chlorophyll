#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833F78
   RuntimeId:        017F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1074
   VfTable:          00000001421EAA18
   Address (Base):   00000001430DCF50
*/
#pragma pack(push, 8)
class AIBehaviorTreeBoolProvider : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(AIBehaviorTreeBoolProvider) == 16);

}
