#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/TransformProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835100
   RuntimeId:        029A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10A3
   VfTable:          00000001421EC658
   Address (Base):   000000014311A490
*/
#pragma pack(push, 8)
class TransformProvider_FromAsset : public TransformProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class DataProviderAsset) Asset; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TransformProvider_FromAsset) == 24);

}
