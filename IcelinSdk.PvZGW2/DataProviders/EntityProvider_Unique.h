#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/EntityListProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834CE0
   RuntimeId:        0258
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1087
   VfTable:          00000001421EC958
   Address (Base):   000000014311B030
*/
#pragma pack(push, 8)
class EntityProvider_Unique : public EntityListProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityListProvider) EntityList; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EntityProvider_Unique) == 24);

}
