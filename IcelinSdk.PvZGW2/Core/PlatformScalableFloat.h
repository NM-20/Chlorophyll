#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428336A8
   RuntimeId:        0125
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BC620
   Default Value:    0000000142BEA4F8
*/
#pragma pack(push, 4)
struct PlatformScalableFloat
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Default; /* 0x0000 */
  FB_FLOAT32 Xenon; /* 0x0004 */
  FB_FLOAT32 Ps3; /* 0x0008 */
  FB_FLOAT32 Gen4a; /* 0x000C */
  FB_FLOAT32 Gen4b; /* 0x0010 */
  FB_FLOAT32 Android; /* 0x0014 */
  FB_FLOAT32 iOS; /* 0x0018 */
  FB_FLOAT32 OSX; /* 0x001C */
  FB_FLOAT32 Linux; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0024 */
#pragma pack(pop)

static_assert(sizeof(PlatformScalableFloat) == 36);

}
