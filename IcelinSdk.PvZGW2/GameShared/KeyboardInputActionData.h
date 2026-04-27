#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/InputActionData.h>
#include <IcelinSdk.PvZGW2/GameShared/InputDeviceKeys.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B440
   RuntimeId:        0F4B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ED2
   VfTable:          00000001422608B8
   Address (Base):   00000001430B7A60
*/
#pragma pack(push, 8)
class KeyboardInputActionData : public InputActionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  InputDeviceKeys Key; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(KeyboardInputActionData) == 32);

}
