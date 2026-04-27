#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTTaskFunc.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FE08
   RuntimeId:        1E23
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FA4
   VfTable:          000000014231D4A0
   Address (Base):   00000001430F8AD0
*/
#pragma pack(push, 8)
class BT_Stagger : public BTTaskFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BT_Stagger) == 24);

}
