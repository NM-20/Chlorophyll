#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428704A8
   RuntimeId:        2989
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C19C8
   Default Value:    00000001428704C0
*/
#pragma pack(push, 8)
struct EORBoast
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Player; /* 0x0000 */
  FB_FLOAT32 Value; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(EORBoast) == 16);

/* TypeInfo (Array): 0000000142866E60
   RuntimeId:        239A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4128
   Default Value:    0000000142866188
*/
#pragma pack(push, 8)
struct EorBoast
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT64 PlayerOnlineId; /* 0x0000 */
  FB_CSTRING PlayerName; /* 0x0008 */
  FB_FLOAT32 StatValue; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EorBoast) == 24);

}
