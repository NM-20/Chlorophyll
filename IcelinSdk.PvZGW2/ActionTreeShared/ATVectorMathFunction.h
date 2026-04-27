#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFunctionNode.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATMathOp.h>

namespace fb
{

/* TypeInfo (Array): 00000001428329E8
   RuntimeId:        0092
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F34
   VfTable:          00000001421E2F28
   Address (Base):   000000014311CEF0
*/
#pragma pack(push, 8)
class ATVectorMathFunction : public ATFunctionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATVectorInput) Input1; /* 0x0018 */
  FB_HANDLE(class ATVectorInput) Input2; /* 0x0020 */
  ATMathOp Operation; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ATVectorMathFunction) == 48);

}
