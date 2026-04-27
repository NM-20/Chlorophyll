#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/EntityListProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D258
   RuntimeId:        27B3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1085
   VfTable:          0000000142365E30
   Address (Base):   0000000143105D30
*/
#pragma pack(push, 8)
class PVZEntityListProvider : public EntityListProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZEntityListProvider) == 16);

}
