#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTTaskFunc.h>
#include <IcelinSdk.PvZGW2/PVZShared/EBTAction.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FD68
   RuntimeId:        1E19
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FA6
   VfTable:          000000014231D428
   Address (Base):   00000001430F8CB0
*/
#pragma pack(push, 8)
class BT_DoSpecialWeaponsState : public BTTaskFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  EBTAction Action; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BT_DoSpecialWeaponsState) == 32);

}
