#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>
#include <IcelinSdk.PvZGW2/PVZShared/CoopRewardType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428733C8
   RuntimeId:        2BAE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0764
   VfTable:          0000000142379350
   Address (Base):   0000000143104950
*/
#pragma pack(push, 8)
class CoopRewardData : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  CoopRewardType RewardType; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CoopRewardData) == 32);

}
