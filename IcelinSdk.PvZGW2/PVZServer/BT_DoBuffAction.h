#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTTaskFunc.h>
#include <IcelinSdk.PvZGW2/PVZShared/EBTAction.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FD48
   RuntimeId:        1E17
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FA2
   VfTable:          000000014231D440
   Address (Base):   00000001430F8D10
*/
#pragma pack(push, 8)
class BT_DoBuffAction : public BTTaskFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 GetBuffDataFromWeaponSlot; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class BuffData) Buff; /* 0x0020 */
  EBTAction Action; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(BT_DoBuffAction) == 48);

}
