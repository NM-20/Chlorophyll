#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTTaskFunc.h>
#include <IcelinSdk.PvZGW2/PVZShared/EEventType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FDC8
   RuntimeId:        1E1F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FA9
   VfTable:          000000014231D3E0
   Address (Base):   00000001430F8B90
*/
#pragma pack(push, 8)
class BT_EventTrigger : public BTTaskFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  EEventType EventType; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING EventName; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BT_EventTrigger) == 40);

}
