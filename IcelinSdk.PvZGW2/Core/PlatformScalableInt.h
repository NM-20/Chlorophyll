#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833688
   RuntimeId:        0123
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B5D78
   Default Value:    0000000142B7DF68
*/
#pragma pack(push, 4)
struct PlatformScalableInt
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 Default; /* 0x0000 */
  FB_INT32 Xenon; /* 0x0004 */
  FB_INT32 Ps3; /* 0x0008 */
  FB_INT32 Gen4a; /* 0x000C */
  FB_INT32 Gen4b; /* 0x0010 */
  FB_INT32 Android; /* 0x0014 */
  FB_INT32 iOS; /* 0x0018 */
  FB_INT32 OSX; /* 0x001C */
  FB_INT32 Linux; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0024 */
#pragma pack(pop)

static_assert(sizeof(PlatformScalableInt) == 36);

}
