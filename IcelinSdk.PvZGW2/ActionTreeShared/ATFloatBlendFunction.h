#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFunctionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832A08
   RuntimeId:        0094
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F3B
   VfTable:          00000001421E2F10
   Address (Base):   000000014311CE90
*/
#pragma pack(push, 8)
class ATFloatBlendFunction : public ATFunctionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATFloatInput) FloatAtZero; /* 0x0018 */
  FB_HANDLE(class ATFloatInput) FloatAtOne; /* 0x0020 */
  FB_HANDLE(class ATFloatInput) Blend; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ATFloatBlendFunction) == 48);

}
