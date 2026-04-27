#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/EntityProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834CC0
   RuntimeId:        0256
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          108C
   VfTable:          00000001421EC970
   Address (Base):   000000014311B090
*/
#pragma pack(push, 8)
class EntityProvider_RandomFromList : public EntityProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityListProvider) EntityList; /* 0x0010 */
  FB_INT32 RandomSeed; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(EntityProvider_RandomFromList) == 32);

}
