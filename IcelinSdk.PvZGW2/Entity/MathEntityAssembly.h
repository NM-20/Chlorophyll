#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283ABF0
   RuntimeId:        0839
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB900
   Default Value:    000000014283AC08
*/
#pragma pack(push, 8)
struct MathEntityAssembly
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct MathEntityFunctionCall) FunctionCalls; /* 0x0000 */
  FB_STDARRAY(struct MathEntityInstruction) Instructions; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(MathEntityAssembly) == 16);

}
