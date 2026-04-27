#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFunctionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832A88
   RuntimeId:        009C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F39
   VfTable:          00000001421E2EB0
   Address (Base):   000000014311CD10
*/
#pragma pack(push, 8)
class ATVectorScaleFunction : public ATFunctionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATVectorInput) Vector; /* 0x0018 */
  FB_HANDLE(class ATFloatInput) Scale; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ATVectorScaleFunction) == 40);

}
