#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861828
   RuntimeId:        1FA9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C5388
   Default Value:    0000000142861840
*/
#pragma pack(push, 8)
struct FreeStreamingChunksLoadInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  FB_INT32 NumPartitions; /* 0x0008 */
  FB_BOOLEAN IsLocalized; /* 0x000C */
  FB_BOOLEAN IsOptional; /* 0x000D */
  char pad_000E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(FreeStreamingChunksLoadInfo) == 16);

}
