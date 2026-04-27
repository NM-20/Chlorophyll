#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/EntityProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D278
   RuntimeId:        27B5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          108F
   VfTable:          0000000142365DE8
   Address (Base):   0000000143105CD0
*/
#pragma pack(push, 8)
class PVZEntityProvider : public EntityProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZEntityProvider) == 16);

}
