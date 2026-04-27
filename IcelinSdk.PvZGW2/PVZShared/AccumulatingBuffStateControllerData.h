#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBuffStateControllerData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CF08
   RuntimeId:        2792
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FE1
   VfTable:          00000001423661B0
   Address (Base):   00000001430F7210
*/
#pragma pack(push, 8)
class AccumulatingBuffStateControllerData : public PVZBuffStateControllerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 IntroInitialCharge; /* 0x0028 */
  char pad_002C[0x0004];
  FB_HANDLE(class BuffParameterFloatAsset) IntroInitialChargeOverride; /* 0x0030 */
  FB_FLOAT32 IntroChargeGain; /* 0x0038 */
  char pad_003C[0x0004];
  FB_HANDLE(class BuffParameterFloatAsset) IntroChargeGainOverride; /* 0x0040 */
  FB_FLOAT32 IntroChargeDecay; /* 0x0048 */
  FB_FLOAT32 IntroStartPower; /* 0x004C */
  FB_FLOAT32 IntroEndPower; /* 0x0050 */
  FB_FLOAT32 ActiveTime; /* 0x0054 */
  FB_FLOAT32 ActivePower; /* 0x0058 */
  FB_FLOAT32 OutroTime; /* 0x005C */
  FB_FLOAT32 OutroStartPower; /* 0x0060 */
  FB_FLOAT32 OutroEndPower; /* 0x0064 */
  FB_BOOLEAN AllowIntroChargeGainUpgradeMultiplier; /* 0x0068 */
  char pad_0069[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(AccumulatingBuffStateControllerData) == 112);

}
