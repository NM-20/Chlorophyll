#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/EntityListProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834B18
   RuntimeId:        023E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1088
   VfTable:          00000001421ECAC0
   Address (Base):   00000001430BE610
*/
#pragma pack(push, 8)
class EntityProvider : public EntityListProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(EntityProvider) == 16);

}
