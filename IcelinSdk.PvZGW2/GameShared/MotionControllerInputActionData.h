#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/AxesInputActionData.h>
#include <IcelinSdk.PvZGW2/GameShared/InputDeviceMotionControllerButtons.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B400
   RuntimeId:        0F47
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ED8
   VfTable:          00000001422609F8
   Address (Base):   00000001430FCF70
*/
#pragma pack(push, 8)
class MotionControllerInputActionData : public AxesInputActionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  InputDeviceMotionControllerButtons Button; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MotionControllerInputActionData) == 40);

}
