#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/EntityProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834C20
   RuntimeId:        024C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          108B
   VfTable:          00000001421ECA10
   Address (Base):   000000014311B210
*/
#pragma pack(push, 8)
class EntityProvider_FromAsset : public EntityProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class DataProviderAsset) Asset; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EntityProvider_FromAsset) == 24);

}
