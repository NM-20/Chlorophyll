#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AITypeFilterWrapper.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873AD8
   RuntimeId:        2C18
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0F28
   Default Value:    0000000142873AF0
*/
#pragma pack(push, 4)
struct AIAttractorData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AITypeFilterWrapper TypeFilter; /* 0x0000 */
  FB_FLOAT32 Range; /* 0x0004 */
  FB_FLOAT32 PriorityModifier; /* 0x0008 */
  FB_BOOLEAN Exclude; /* 0x000C */
  FB_BOOLEAN RequiresLineOfSight; /* 0x000D */
  char pad_000E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(AIAttractorData) == 16);

}
