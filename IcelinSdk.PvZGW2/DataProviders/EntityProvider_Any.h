#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/EntityProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834C60
   RuntimeId:        0250
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1090
   VfTable:          00000001421EC9D0
   Address (Base):   000000014311B1B0
*/
#pragma pack(push, 8)
class EntityProvider_Any : public EntityProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityListProvider) EntityList; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EntityProvider_Any) == 24);

}
