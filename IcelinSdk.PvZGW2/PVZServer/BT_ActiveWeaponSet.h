#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTTaskFunc.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FDE8
   RuntimeId:        1E21
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F9F
   VfTable:          000000014231D4B8
   Address (Base):   00000001430F8B30
*/
#pragma pack(push, 8)
class BT_ActiveWeaponSet : public BTTaskFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 WeaponSet; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BT_ActiveWeaponSet) == 32);

}
