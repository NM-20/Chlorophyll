#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862F90
   RuntimeId:        20DC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9500
   Default Value:    0000000142BFE770
*/
#pragma pack(push, 4)
struct PVZHealthBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef AnimationId; /* 0x0000 */
  AntRef IsSpawning; /* 0x0014 */
  AntRef IsAI; /* 0x0028 */
  AntRef SpawningTime; /* 0x003C */
  AntRef DeathAnimationTriggerEnded; /* 0x0050 */
  AntRef ExplosionForce; /* 0x0064 */
  AntRef ExplosionFacingAngle; /* 0x0078 */
  AntRef ExplosionAngleTo; /* 0x008C */
  AntRef ExplosionDistanceTo; /* 0x00A0 */
  AntRef ForceUIStatic; /* 0x00B4 */
  AntRef ScreenshotEnable; /* 0x00C8 */
  AntRef IsStreaming; /* 0x00DC */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */
#pragma pack(pop)

static_assert(sizeof(PVZHealthBinding) == 240);

}
