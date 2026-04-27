#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C760
   RuntimeId:        105C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06ED
   VfTable:          0000000142267850
   Address (Base):   00000001430ED420
*/
#pragma pack(push, 8)
class UICppScreenData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 FieldOfView; /* 0x0018 */
  FB_FLOAT32 ScreenLayoutWidth; /* 0x001C */
  FB_FLOAT32 ScreenLayoutHeight; /* 0x0020 */
  FB_BOOLEAN ScaleUpAndKeepAspectRatio; /* 0x0024 */
  FB_BOOLEAN FlashCompatibilityMode; /* 0x0025 */
  FB_BOOLEAN EatAllInput; /* 0x0026 */
  FB_BOOLEAN LayoutWithSafeZone; /* 0x0027 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UICppScreenData) == 40);

}
