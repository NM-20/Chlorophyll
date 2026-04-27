#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/AxesInputActionData.h>
#include <IcelinSdk.PvZGW2/GameShared/InputDevicePadButtons.h>
#include <IcelinSdk.PvZGW2/GameShared/InputDevicePOVs.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B3C0
   RuntimeId:        0F43
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ED6
   VfTable:          0000000142260B10
   Address (Base):   00000001430B7750
*/
#pragma pack(push, 8)
class PadInputActionData : public AxesInputActionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  InputDevicePadButtons Button; /* 0x0020 */
  InputDevicePadButtons PS3AlternativeButton; /* 0x0024 */
  InputDevicePOVs Pov; /* 0x0028 */
  FB_BOOLEAN UseSquareInput; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PadInputActionData) == 48);

}
