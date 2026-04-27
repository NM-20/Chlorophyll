#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835558
   RuntimeId:        02DE
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD428
   Default Value:    0000000142BEBD78
*/
#pragma pack(push, 4)
struct EnumGuidIndexPair
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_GUID EnumGuid; /* 0x0000 */
  FB_INT32 Index; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(EnumGuidIndexPair) == 20);

}
