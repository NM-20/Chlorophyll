#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283ABA8
   RuntimeId:        0835
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCAA8
   Default Value:    000000014283ABC0
*/
#pragma pack(push, 8)
struct MathEntityFunctionCall
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(FB_UINT32) Parameters; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(MathEntityFunctionCall) == 8);

}
