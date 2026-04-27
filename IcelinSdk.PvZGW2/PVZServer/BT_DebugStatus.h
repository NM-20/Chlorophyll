#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTTaskFunc.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FE28
   RuntimeId:        1E25
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FA8
   VfTable:          000000014231D488
   Address (Base):   00000001430F8A70
*/
#pragma pack(push, 8)
class BT_DebugStatus : public BTTaskFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING DebugString; /* 0x0018 */
  FB_BOOLEAN DebugReturnTrue; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BT_DebugStatus) == 40);

}
