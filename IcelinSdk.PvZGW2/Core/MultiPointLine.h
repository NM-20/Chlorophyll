#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832FB8
   RuntimeId:        00DE
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BC680
   Default Value:    0000000142832FD0
*/
#pragma pack(push, 8)
struct MultiPointLine
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct MultiPointLinePoint) Points; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(MultiPointLine) == 8);

}
