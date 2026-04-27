#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B148
   RuntimeId:        0F21
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ED0
   VfTable:          0000000142261510
   Address (Base):   00000001430D7210
*/
#pragma pack(push, 8)
class InputActionData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN IsAnalog; /* 0x0010 */
  FB_BOOLEAN NegateValue; /* 0x0011 */
  char pad_0012[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(InputActionData) == 24);

}
