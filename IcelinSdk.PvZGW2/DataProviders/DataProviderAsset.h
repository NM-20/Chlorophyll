#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834A38
   RuntimeId:        0230
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          076B
   VfTable:          00000001421ECB70
   Address (Base):   000000014311B450
*/
#pragma pack(push, 8)
class DataProviderAsset : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class DataProviderBase) Provider; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(DataProviderAsset) == 32);

}
