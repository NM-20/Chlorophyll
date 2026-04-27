#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/InputActionData.h>
#include <IcelinSdk.PvZGW2/GameShared/InputDeviceAxes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B3A0
   RuntimeId:        0F41
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ED3
   VfTable:          0000000142260B48
   Address (Base):   00000001430D0E00
*/
#pragma pack(push, 8)
class AxesInputActionData : public InputActionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  InputDeviceAxes Axis; /* 0x0018 */
  FB_BOOLEAN NormalizeInput; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AxesInputActionData) == 32);

}
