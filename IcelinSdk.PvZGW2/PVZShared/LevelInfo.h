#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286F0E8
   RuntimeId:        28C8
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C2408
   Default Value:    000000014286EF78
*/
#pragma pack(push, 8)
struct LevelInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class Asset) Level; /* 0x0000 */
  FB_CSTRING GameMode; /* 0x0008 */
  FB_BOOLEAN IsDay; /* 0x0010 */
  FB_BOOLEAN IsGW1; /* 0x0011 */
  char pad_0012[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(LevelInfo) == 24);

}
