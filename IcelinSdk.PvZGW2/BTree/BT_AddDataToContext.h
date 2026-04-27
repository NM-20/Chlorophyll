#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTTaskFunc.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834478
   RuntimeId:        01CF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F9C
   VfTable:          00000001421EB508
   Address (Base):   0000000143100E10
*/
#pragma pack(push, 8)
class BT_AddDataToContext : public BTTaskFunc
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING DataContainerType; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BT_AddDataToContext) == 32);

}
