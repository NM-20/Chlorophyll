#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/EntityProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834C40
   RuntimeId:        024E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1089
   VfTable:          00000001421EC9F0
   Address (Base):   0000000143100CF0
*/
#pragma pack(push, 8)
class EntityProvider_Self : public EntityProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(EntityProvider_Self) == 16);

}
