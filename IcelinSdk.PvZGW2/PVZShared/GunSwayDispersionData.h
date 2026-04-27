#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DD48
   RuntimeId:        285A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8560
   Default Value:    000000014286DD60
*/
#pragma pack(push, 4)
struct GunSwayDispersionData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 MinAngle; /* 0x0000 */
  FB_FLOAT32 MaxAngle; /* 0x0004 */
  FB_FLOAT32 IncreasePerShot; /* 0x0008 */
  FB_FLOAT32 DecreasePerSecond; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(GunSwayDispersionData) == 16);

}
