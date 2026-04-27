#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTEvalFunc.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834458
   RuntimeId:        01CD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FAC
   VfTable:          00000001421EB520
   Address (Base):   0000000143100E70
*/
#pragma pack(push, 8)
class BT_Condition : public BTEvalFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BoolProvider) Condition; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BT_Condition) == 40);

}
