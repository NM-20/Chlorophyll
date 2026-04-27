#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/EntityProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834CA0
   RuntimeId:        0254
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          108A
   VfTable:          00000001421EC990
   Address (Base):   000000014311B0F0
*/
#pragma pack(push, 8)
class EntityProvider_Farthest : public EntityProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityListProvider) CandidateEntities; /* 0x0010 */
  FB_HANDLE(class Vector3Provider) ReferenceLocation; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(EntityProvider_Farthest) == 32);

}
