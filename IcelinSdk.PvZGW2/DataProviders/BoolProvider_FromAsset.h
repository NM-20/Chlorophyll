#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 00000001428346D8
   RuntimeId:        01FA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1079
   VfTable:          00000001421ECD70
   Address (Base):   000000014311BC30
*/
#pragma pack(push, 8)
class BoolProvider_FromAsset : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class DataProviderAsset) Asset; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_FromAsset) == 24);

}
