#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/AxesInputActionData.h>
#include <IcelinSdk.PvZGW2/GameShared/InputDeviceMouseButtons.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B460
   RuntimeId:        0F4D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ED7
   VfTable:          0000000142260930
   Address (Base):   00000001430B76F0
*/
#pragma pack(push, 8)
class MouseInputActionData : public AxesInputActionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  InputDeviceMouseButtons Button; /* 0x0020 */
  FB_BOOLEAN SimulateJoystickAxis; /* 0x0024 */
  FB_BOOLEAN RememberExcessInput; /* 0x0025 */
  FB_BOOLEAN ScaleScrollWheelAxisInput; /* 0x0026 */
  char pad_0027[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MouseInputActionData) == 40);

}
