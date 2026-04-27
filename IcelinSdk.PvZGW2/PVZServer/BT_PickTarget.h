#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTTaskFunc.h>
#include <IcelinSdk.PvZGW2/PVZShared/ETargetType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FD08
   RuntimeId:        1E13
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F99
   VfTable:          000000014231D558
   Address (Base):   00000001430F8DD0
*/
#pragma pack(push, 8)
class BT_PickTarget : public BTTaskFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  ETargetType TargetType; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BT_PickTarget) == 32);

}
