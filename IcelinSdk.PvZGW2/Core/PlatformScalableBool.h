#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428336C8
   RuntimeId:        0127
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BC600
   Default Value:    0000000142B7DF90
*/
#pragma pack(push, 1)
struct PlatformScalableBool
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_BOOLEAN Default; /* 0x0000 */
  FB_BOOLEAN Xenon; /* 0x0001 */
  FB_BOOLEAN Ps3; /* 0x0002 */
  FB_BOOLEAN Gen4a; /* 0x0003 */
  FB_BOOLEAN Gen4b; /* 0x0004 */
  FB_BOOLEAN Android; /* 0x0005 */
  FB_BOOLEAN iOS; /* 0x0006 */
  FB_BOOLEAN OSX; /* 0x0007 */
  FB_BOOLEAN Linux; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0009 */
#pragma pack(pop)

static_assert(sizeof(PlatformScalableBool) == 9);

}
