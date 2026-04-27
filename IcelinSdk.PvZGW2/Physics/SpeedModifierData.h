#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428515F0
   RuntimeId:        1484
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA420
   Default Value:    0000000142851608
*/
#pragma pack(push, 4)
struct SpeedModifierData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 ForwardConstant; /* 0x0000 */
  FB_FLOAT32 BackwardConstant; /* 0x0004 */
  FB_FLOAT32 LeftConstant; /* 0x0008 */
  FB_FLOAT32 RightConstant; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(SpeedModifierData) == 16);

}
