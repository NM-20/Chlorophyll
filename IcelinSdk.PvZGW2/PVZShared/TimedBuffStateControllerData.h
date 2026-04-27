#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBuffStateControllerData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CF88
   RuntimeId:        279A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FDD
   VfTable:          0000000142366160
   Address (Base):   00000001430F7090
*/
#pragma pack(push, 8)
class TimedBuffStateControllerData : public PVZBuffStateControllerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 IntroTime; /* 0x0028 */
  FB_FLOAT32 IntroStartPower; /* 0x002C */
  FB_FLOAT32 IntroEndPower; /* 0x0030 */
  FB_FLOAT32 Duration; /* 0x0034 */
  FB_REFARRAY(class BuffStateModifierData) DurationModifiers; /* 0x0038 */
  FB_INT32 ApplicationLimit; /* 0x0040 */
  FB_FLOAT32 MinPowerThreshold; /* 0x0044 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x0048 */
  FB_FLOAT32 MinPower; /* 0x004C */
  FB_FLOAT32 MaxPower; /* 0x0050 */
  FB_FLOAT32 BaseDecayRate; /* 0x0054 */
  FB_FLOAT32 MovementDecayRate; /* 0x0058 */
  FB_FLOAT32 SubsequentDurationConsumption; /* 0x005C */
  FB_FLOAT32 OutroTime; /* 0x0060 */
  FB_FLOAT32 OutroStartPower; /* 0x0064 */
  FB_FLOAT32 OutroEndPower; /* 0x0068 */
  FB_BOOLEAN AllowDurationUpgradeMultiplier; /* 0x006C */
  FB_BOOLEAN DurationIsAdditive; /* 0x006D */
  char pad_006E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(TimedBuffStateControllerData) == 112);

}
