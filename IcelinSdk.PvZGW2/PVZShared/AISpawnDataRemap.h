#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428739F8
   RuntimeId:        2C0A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          076D
   VfTable:          0000000142379018
   Address (Base):   0000000143104470
*/
#pragma pack(push, 8)
class AISpawnDataRemap : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct AISpawnDataSwap) BlueprintSwap; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AISpawnDataRemap) == 32);

}
