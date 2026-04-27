#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428655B8
   RuntimeId:        22D1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          075B
   VfTable:          00000001423514D0
   Address (Base):   0000000143108070
*/
#pragma pack(push, 8)
class GlobalEffectsMapAsset : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct GlobalEffectsMap) Map; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(GlobalEffectsMapAsset) == 32);

}
