#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868E50
   RuntimeId:        2437
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0786
   VfTable:          00000001423560E0
   Address (Base):   0000000143107B30
*/
#pragma pack(push, 8)
class AISpawnBlueprints : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ListName; /* 0x0018 */
  FB_REFARRAY(class AISpawnData) SpawnDataList; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(AISpawnBlueprints) == 40);

}
