#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFunctionNode.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATMathOp.h>

namespace fb
{

/* TypeInfo (Array): 00000001428329C8
   RuntimeId:        0090
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F3A
   VfTable:          00000001421E2F40
   Address (Base):   000000014311CF50
*/
#pragma pack(push, 8)
class ATFloatMathFunction : public ATFunctionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATFloatInput) Input1; /* 0x0018 */
  FB_HANDLE(class ATFloatInput) Input2; /* 0x0020 */
  ATMathOp Operation; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ATFloatMathFunction) == 48);

}
