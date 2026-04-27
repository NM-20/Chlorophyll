#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/InputActionData.h>
#include <IcelinSdk.PvZGW2/GameShared/InputDeviceMessageEvent.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B480
   RuntimeId:        0F4F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ED1
   VfTable:          0000000142260910
   Address (Base):   00000001430DC0B0
*/
#pragma pack(push, 8)
class MessageInputActionData : public InputActionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  InputDeviceMessageEvent Command; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MessageInputActionData) == 32);

}
