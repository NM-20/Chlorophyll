#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/ProviderEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834518
   RuntimeId:        01DE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AE8
   VfTable:          00000001421EBFB8
   Address (Base):   00000001430F32A0
*/
#pragma pack(push, 8)
class BoolProviderEntityData : public ProviderEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BoolProvider) Provider; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BoolProviderEntityData) == 40);

}
