#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B8A0
   RuntimeId:        265E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B89A0
   Default Value:    0000000142BB4FDC
*/
#pragma pack(push, 4)
struct DurangoAchievementSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 CompletionValue; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(DurangoAchievementSettings) == 4);

}
