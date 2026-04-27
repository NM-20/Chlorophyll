#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BD98
   RuntimeId:        0FD6
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9328
   Default Value:    000000014284BDB0
*/
#pragma pack(push, 8)
struct InputRecorderTrackData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  FB_INT32 InputAction; /* 0x0008 */
  char pad_000C[0x0004];
  FB_HANDLE(class FloatPropertyTrackData) PropertyTrack; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(InputRecorderTrackData) == 24);

}
