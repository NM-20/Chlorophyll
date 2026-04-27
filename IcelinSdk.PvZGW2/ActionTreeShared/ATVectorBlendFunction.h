#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFunctionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832A28
   RuntimeId:        0096
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F3D
   VfTable:          00000001421E2EF8
   Address (Base):   000000014311CE30
*/
#pragma pack(push, 8)
class ATVectorBlendFunction : public ATFunctionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATVectorInput) VectorAtZero; /* 0x0018 */
  FB_HANDLE(class ATVectorInput) VectorAtOne; /* 0x0020 */
  FB_HANDLE(class ATFloatInput) Blend; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ATVectorBlendFunction) == 48);

}
