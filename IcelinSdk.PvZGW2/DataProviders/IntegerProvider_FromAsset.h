#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/IntegerProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835060
   RuntimeId:        0290
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10BF
   VfTable:          00000001421EC6D0
   Address (Base):   000000014311A670
*/
#pragma pack(push, 8)
class IntegerProvider_FromAsset : public IntegerProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class DataProviderAsset) Asset; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(IntegerProvider_FromAsset) == 24);

}
