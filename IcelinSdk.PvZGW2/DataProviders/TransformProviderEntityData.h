#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/ProviderEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428345D8
   RuntimeId:        01EA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AEB
   VfTable:          00000001421ECE70
   Address (Base):   00000001430F3180
*/
#pragma pack(push, 8)
class TransformProviderEntityData : public ProviderEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TransformProvider) Provider; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TransformProviderEntityData) == 40);

}
