#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIWidgetEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementColor.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871950
   RuntimeId:        2A97
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BC4
   VfTable:          000000014236C500
   Address (Base):   00000001430E22C0
*/
#pragma pack(push, 16)
class UICCTVWidgetData : public UIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 NoiseSpeed; /* 0x0040 */
  FB_FLOAT32 ScanlineWrapAmount; /* 0x0044 */
  FB_FLOAT32 ScanlineSpeed; /* 0x0048 */
  char pad_004C[0x0004];
  UIElementColor Color; /* 0x0050 */
  FB_FLOAT32 ScanlinePower; /* 0x0070 */
  FB_FLOAT32 ColorScanlineWrapAmount; /* 0x0074 */
  FB_FLOAT32 ColorScanlineSpeed; /* 0x0078 */
  FB_FLOAT32 ColorScanlinePower; /* 0x007C */
  FB_FLOAT32 RgbSaturation; /* 0x0080 */
  FB_FLOAT32 RgbContrast; /* 0x0084 */
  FB_FLOAT32 RDistortAmount; /* 0x0088 */
  FB_FLOAT32 Power; /* 0x008C */
  FB_FLOAT32 ExternalPowerSpeed; /* 0x0090 */
  FB_FLOAT32 DistortMinTime; /* 0x0094 */
  FB_FLOAT32 DistortMaxTime; /* 0x0098 */
  FB_FLOAT32 TVNoiseSpeed; /* 0x009C */
  FB_BOOLEAN EnableNoise; /* 0x00A0 */
  char pad_00A1[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(UICCTVWidgetData) == 176);

}
