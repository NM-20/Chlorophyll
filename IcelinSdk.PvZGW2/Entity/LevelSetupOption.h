#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C2B0
   RuntimeId:        099E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CC8C8
   Default Value:    000000014283C2C8
*/
#pragma pack(push, 8)
struct LevelSetupOption
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Criterion; /* 0x0000 */
  FB_CSTRING Value; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(LevelSetupOption) == 16);

}
