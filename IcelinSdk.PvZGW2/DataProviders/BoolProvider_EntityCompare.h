#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>
#include <IcelinSdk.PvZGW2/DataProviders/EntityCompareEnum.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834838
   RuntimeId:        0210
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1071
   VfTable:          00000001421ECCB0
   Address (Base):   000000014311B930
*/
#pragma pack(push, 8)
class BoolProvider_EntityCompare : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityProvider) FirstEntityProvider; /* 0x0010 */
  FB_HANDLE(class EntityProvider) SecondEntityProvider; /* 0x0018 */
  EntityCompareEnum ComparisonType; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_EntityCompare) == 40);

}
