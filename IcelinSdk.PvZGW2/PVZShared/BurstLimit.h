#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874448
   RuntimeId:        2C4E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B7F20
   Default Value:    0000000142BB5D50
*/
#pragma pack(push, 4)
struct BurstLimit
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 Min; /* 0x0000 */
  FB_INT32 Max; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(BurstLimit) == 8);

}
