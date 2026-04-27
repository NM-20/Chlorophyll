#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428514A0
   RuntimeId:        1472
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA480
   Default Value:    00000001428514B8
*/
#pragma pack(push, 4)
struct EndPointData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Pos; /* 0x0000 */
  FB_FLOAT32 EndDamping; /* 0x0004 */
  FB_FLOAT32 SpringLength; /* 0x0008 */
  FB_FLOAT32 SpringAcceleration; /* 0x000C */
  FB_FLOAT32 SpringDamping; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(EndPointData) == 20);

}
