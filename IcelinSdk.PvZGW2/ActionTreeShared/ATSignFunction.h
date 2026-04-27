#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFunctionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832A68
   RuntimeId:        009A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F35
   VfTable:          00000001421E2EC8
   Address (Base):   000000014311CD70
*/
#pragma pack(push, 8)
class ATSignFunction : public ATFunctionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATFloatInput) Input; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ATSignFunction) == 32);

}
