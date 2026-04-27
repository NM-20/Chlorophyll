#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/MathOpCode.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AB88
   RuntimeId:        0833
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCAC8
   Default Value:    0000000142B97DB8
*/
#pragma pack(push, 4)
struct MathEntityInstruction
{
  typedef struct ValueTypeInfo TypeInfo_t;

  MathOpCode Code; /* 0x0000 */
  FB_INT32 Result; /* 0x0004 */
  FB_INT32 Param1; /* 0x0008 */
  FB_INT32 Param2; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(MathEntityInstruction) == 16);

}
