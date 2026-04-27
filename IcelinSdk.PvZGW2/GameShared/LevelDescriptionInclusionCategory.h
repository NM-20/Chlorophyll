#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142848EE8
   RuntimeId:        0D36
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9848
   Default Value:    0000000142848F00
*/
#pragma pack(push, 8)
struct LevelDescriptionInclusionCategory
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Category; /* 0x0000 */
  FB_STDARRAY(FB_CSTRING) Mode; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(LevelDescriptionInclusionCategory) == 16);

}
