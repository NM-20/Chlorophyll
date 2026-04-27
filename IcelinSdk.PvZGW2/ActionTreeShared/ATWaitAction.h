#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATActionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832218
   RuntimeId:        0016
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F2F
   VfTable:          00000001421E3368
   Address (Base):   000000014311DCD0
*/
#pragma pack(push, 8)
class ATWaitAction : public ATActionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATFloatInput) TimeEndMin; /* 0x0028 */
  FB_HANDLE(class ATFloatInput) TimeEndMax; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ATWaitAction) == 56);

}
