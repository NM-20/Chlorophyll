#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/EntityListProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834D40
   RuntimeId:        025E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1083
   VfTable:          00000001421EC910
   Address (Base):   000000014311AF10
*/
#pragma pack(push, 8)
class EntityProvider_Intersection : public EntityListProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityListProvider) EntityListA; /* 0x0010 */
  FB_HANDLE(class EntityListProvider) EntityListB; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(EntityProvider_Intersection) == 32);

}
