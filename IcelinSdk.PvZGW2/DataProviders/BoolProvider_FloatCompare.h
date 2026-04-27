#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatCompareEnum.h>

namespace fb
{

/* TypeInfo (Array): 00000001428347B8
   RuntimeId:        0208
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1015
   VfTable:          00000001421ECCE0
   Address (Base):   000000014311B9F0
*/
#pragma pack(push, 8)
class BoolProvider_FloatCompare : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatProvider) Param1; /* 0x0010 */
  FB_HANDLE(class FloatProvider) Param2; /* 0x0018 */
  FloatCompareEnum ComparisonType; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_FloatCompare) == 40);

}
