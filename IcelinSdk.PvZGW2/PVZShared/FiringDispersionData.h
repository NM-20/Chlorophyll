#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/DispersionMode.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B168
   RuntimeId:        260C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8B00
   Default Value:    000000014286B180
*/
#pragma pack(push, 4)
struct FiringDispersionData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  DispersionMode DispersionMode; /* 0x0000 */
  FB_FLOAT32 MinAngle; /* 0x0004 */
  FB_FLOAT32 MaxAngle; /* 0x0008 */
  FB_FLOAT32 IncreasePerShot; /* 0x000C */
  FB_FLOAT32 DecreasePerSecond; /* 0x0010 */
  FB_FLOAT32 YawMultiplier; /* 0x0014 */
  FB_FLOAT32 PitchMultiplier; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x001C */
#pragma pack(pop)

static_assert(sizeof(FiringDispersionData) == 28);

}
