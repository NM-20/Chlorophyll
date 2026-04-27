#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTTaskFunc.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FCA8
   RuntimeId:        1E0D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F9D
   VfTable:          000000014231D5A0
   Address (Base):   00000001430F8EF0
*/
#pragma pack(push, 8)
class BT_Wait : public BTTaskFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatProvider) WaitTime; /* 0x0018 */
  FB_BOOLEAN WaitForever; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BT_Wait) == 40);

}
