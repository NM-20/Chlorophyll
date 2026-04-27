#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBuffStateControllerData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CFA8
   RuntimeId:        279C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FDF
   VfTable:          0000000142366040
   Address (Base):   00000001430F7030
*/
#pragma pack(push, 8)
class WeaponAmmoBuffStateControllerData : public PVZBuffStateControllerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 IntroTime; /* 0x0028 */
  FB_FLOAT32 IntroStartPower; /* 0x002C */
  FB_FLOAT32 IntroEndPower; /* 0x0030 */
  FB_FLOAT32 MinPowerThreshold; /* 0x0034 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x0038 */
  FB_FLOAT32 MinPower; /* 0x003C */
  FB_FLOAT32 MaxPower; /* 0x0040 */
  FB_FLOAT32 OutroTime; /* 0x0044 */
  FB_FLOAT32 OutroStartPower; /* 0x0048 */
  FB_FLOAT32 OutroEndPower; /* 0x004C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(WeaponAmmoBuffStateControllerData) == 80);

}
