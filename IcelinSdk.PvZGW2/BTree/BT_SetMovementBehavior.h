#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTTaskFunc.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834018
   RuntimeId:        0189
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FA0
   VfTable:          00000001421EA990
   Address (Base):   0000000143101050
*/
#pragma pack(push, 8)
class BT_SetMovementBehavior : public BTTaskFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MovementBehavior) Behavior; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BT_SetMovementBehavior) == 32);

}
