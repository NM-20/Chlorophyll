#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/DataProviderBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834AF8
   RuntimeId:        023C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1081
   VfTable:          00000001421ECAE0
   Address (Base):   00000001430C0310
*/
#pragma pack(push, 8)
class EntityListProvider : public DataProviderBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(EntityListProvider) == 16);

}
