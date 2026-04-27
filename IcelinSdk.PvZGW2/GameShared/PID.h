#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A618
   RuntimeId:        0E92
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB400
   Default Value:    000000014284A630
*/
#pragma pack(push, 4)
struct PID
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 P; /* 0x0000 */
  FB_FLOAT32 I; /* 0x0004 */
  FB_FLOAT32 D; /* 0x0008 */
  FB_FLOAT32 MaxError; /* 0x000C */
  FB_FLOAT32 MaxPTerm; /* 0x0010 */
  FB_FLOAT32 MaxITerm; /* 0x0014 */
  FB_FLOAT32 MaxSumError; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x001C */
#pragma pack(pop)

static_assert(sizeof(PID) == 28);

}
