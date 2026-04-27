#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849260
   RuntimeId:        0D66
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          110F
   VfTable:          0000000142260390
   Address (Base):   0000000143114730
*/
#pragma pack(push, 8)
class AllowedVehiclesData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(AllowedVehiclesData) == 16);

}
