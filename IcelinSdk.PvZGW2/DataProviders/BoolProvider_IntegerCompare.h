#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>
#include <IcelinSdk.PvZGW2/DataProviders/IntegerCompareEnum.h>

namespace fb
{

/* TypeInfo (Array): 00000001428347F8
   RuntimeId:        020C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1069
   VfTable:          00000001421ECCC8
   Address (Base):   000000014311B990
*/
#pragma pack(push, 8)
class BoolProvider_IntegerCompare : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class IntegerProvider) Param1; /* 0x0010 */
  FB_HANDLE(class IntegerProvider) Param2; /* 0x0018 */
  IntegerCompareEnum ComparisonType; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_IntegerCompare) == 40);

}
