#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851B88
   RuntimeId:        14DC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8848
   Default Value:    0000000142851BA0
*/
#pragma pack(push, 8)
struct MaterialIndicesLookup
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(FB_UINT32) MaterialIndices; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(MaterialIndicesLookup) == 8);

}
