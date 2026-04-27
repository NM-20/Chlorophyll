#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTFunc.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834218
   RuntimeId:        01A9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F97
   VfTable:          00000001421EB6D0
   Address (Base):   00000001430B6500
*/
#pragma pack(push, 8)
class BTTaskFunc : public BTFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BTTaskFunc) == 24);

}
