#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876578
   RuntimeId:        2DC6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07BF
   VfTable:          0000000142393198
   Address (Base):   0000000143102FD0
*/
#pragma pack(push, 8)
class StateNodeInfoList : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct StateNodeInfo) States; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(StateNodeInfoList) == 32);

}
