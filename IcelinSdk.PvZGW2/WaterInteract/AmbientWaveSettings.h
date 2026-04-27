#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SplineCurve.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876C58
   RuntimeId:        2E24
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B7C20
   Default Value:    0000000142876C70
*/
#pragma pack(push, 16)
struct AmbientWaveSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  SplineCurve WindDistribution; /* 0x0000 */
  FB_FLOAT32 WaveAmplitude; /* 0x00E0 */
  FB_FLOAT32 WindSpeed; /* 0x00E4 */
  FB_FLOAT32 WindAngle; /* 0x00E8 */
  FB_FLOAT32 MinWavelength; /* 0x00EC */
  FB_FLOAT32 LargeWaveReduction; /* 0x00F0 */
  FB_FLOAT32 FoamHalfLife; /* 0x00F4 */
  FB_FLOAT32 FoamThreshold; /* 0x00F8 */
  FB_FLOAT32 FoamMaxValue; /* 0x00FC */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(AmbientWaveSettings) == 256);

}
