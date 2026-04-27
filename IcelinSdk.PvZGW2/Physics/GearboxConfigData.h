#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428511D8
   RuntimeId:        144A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FD3
   VfTable:          000000014227F638
   Address (Base):   000000014310F330
*/
#pragma pack(push, 8)
class GearboxConfigData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_FLOAT32) ForwardGearRatios; /* 0x0010 */
  FB_STDARRAY(FB_FLOAT32) ForwardGearSpeeds; /* 0x0018 */
  FB_STDARRAY(FB_FLOAT32) ReverseGearRatios; /* 0x0020 */
  FB_STDARRAY(FB_FLOAT32) ReverseGearSpeeds; /* 0x0028 */
  FB_INT32 GearboxType; /* 0x0030 */
  FB_INT32 GearboxMode; /* 0x0034 */
  FB_FLOAT32 GearChangeTime; /* 0x0038 */
  FB_FLOAT32 GearDownSpeedFactor; /* 0x003C */
  FB_FLOAT32 OppositeDirGearChangeMaxSpeed; /* 0x0040 */
  FB_FLOAT32 OppositeDirGearChangeTime; /* 0x0044 */
  FB_FLOAT32 ClutchSpeedFactor; /* 0x0048 */
  FB_FLOAT32 TransmissionEfficiency; /* 0x004C */
  FB_BOOLEAN UseAutoClutch; /* 0x0050 */
  FB_BOOLEAN UseClassicGearBoxAutoClutch; /* 0x0051 */
  FB_BOOLEAN UseNeutralGear; /* 0x0052 */
  char pad_0053[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(GearboxConfigData) == 88);

}
