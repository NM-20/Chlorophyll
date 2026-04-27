#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTTaskFunc.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FC88
   RuntimeId:        1E0B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FA7
   VfTable:          000000014231D4D0
   Address (Base):   00000001430F8F50
*/
#pragma pack(push, 8)
class BT_SetPVZBehavior : public BTTaskFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PVZBehavior) Behavior; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BT_SetPVZBehavior) == 32);

}
