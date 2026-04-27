#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D708
   RuntimeId:        2810
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C2D88
   Default Value:    000000014286D720
*/
#pragma pack(push, 4)
struct AnimationConfigurationShootModuleData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 ZoomedKickbackFactor; /* 0x0000 */
  FB_FLOAT32 ZoomedKickbackSpeedFactor; /* 0x0004 */
  FB_FLOAT32 KickbackFactor; /* 0x0008 */
  FB_FLOAT32 KickbackSpeedFactor; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(AnimationConfigurationShootModuleData) == 16);

}
