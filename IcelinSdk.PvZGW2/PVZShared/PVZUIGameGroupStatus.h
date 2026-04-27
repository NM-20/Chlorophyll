#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871350
   RuntimeId:        2A49
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B81A0
   Default Value:    0000000142871370
*/
#pragma pack(push, 8)
struct PVZUIGameGroupStatus
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT64 GameId; /* 0x0000 */
  FB_INT64 HostId; /* 0x0008 */
  FB_CSTRING GroupName; /* 0x0010 */
  FB_INT32 PlayerCount; /* 0x0018 */
  FB_INT32 PlayerCapacity; /* 0x001C */
  FB_CSTRING GameMode; /* 0x0020 */
  FB_CSTRING MapName; /* 0x0028 */
  FB_CSTRING MapDescription; /* 0x0030 */
  FB_STDARRAY(struct PVZUIPlayerName) PlayerNames; /* 0x0038 */
  FB_CSTRING HostName; /* 0x0040 */
  FB_BOOLEAN Joinable; /* 0x0048 */
  char pad_0049[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZUIGameGroupStatus) == 80);

}
