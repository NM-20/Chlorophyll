#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A228
   RuntimeId:        0E58
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9688
   Default Value:    000000014284A240
*/
#pragma pack(push, 8)
struct FloatOption
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  FB_FLOAT32 Value; /* 0x0008 */
  FB_FLOAT32 Min; /* 0x000C */
  FB_FLOAT32 Max; /* 0x0010 */
  FB_FLOAT32 Step; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(FloatOption) == 24);

}
