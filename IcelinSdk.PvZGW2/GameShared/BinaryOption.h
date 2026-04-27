#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A2C0
   RuntimeId:        0E5E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9628
   Default Value:    000000014284A2D8
*/
#pragma pack(push, 8)
struct BinaryOption
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(BinaryOption) == 8);

}
