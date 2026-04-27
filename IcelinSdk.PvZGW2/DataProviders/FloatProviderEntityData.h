#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/ProviderEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834538
   RuntimeId:        01E0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AE9
   VfTable:          00000001421EBF80
   Address (Base):   00000001430F3240
*/
#pragma pack(push, 8)
class FloatProviderEntityData : public ProviderEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatProvider) Provider; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(FloatProviderEntityData) == 40);

}
