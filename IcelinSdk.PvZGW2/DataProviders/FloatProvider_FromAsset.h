#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834D60
   RuntimeId:        0260
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10D7
   VfTable:          00000001421EC8F8
   Address (Base):   000000014311AEB0
*/
#pragma pack(push, 8)
class FloatProvider_FromAsset : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class DataProviderAsset) Asset; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_FromAsset) == 24);

}
