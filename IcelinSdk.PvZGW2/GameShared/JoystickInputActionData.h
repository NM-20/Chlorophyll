#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/AxesInputActionData.h>
#include <IcelinSdk.PvZGW2/GameShared/InputDevicePadButtons.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B3E0
   RuntimeId:        0F45
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ED5
   VfTable:          0000000142260968
   Address (Base):   00000001430D71B0
*/
#pragma pack(push, 8)
class JoystickInputActionData : public AxesInputActionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  InputDevicePadButtons Button; /* 0x0020 */
  FB_BOOLEAN UseSquareInput; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(JoystickInputActionData) == 40);

}
