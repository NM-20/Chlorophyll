#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428762C8
   RuntimeId:        2D9C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0748
   VfTable:          0000000142393480
   Address (Base):   0000000143103030
*/
#pragma pack(push, 8)
class ConfigEntityAssetData : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ConfigListAsset) DataLists; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ConfigEntityAssetData) == 32);

}
