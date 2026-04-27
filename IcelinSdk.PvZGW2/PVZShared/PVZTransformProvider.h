#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/TransformProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D218
   RuntimeId:        27AF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          109B
   VfTable:          0000000142366070
   Address (Base):   0000000143105DF0
*/
#pragma pack(push, 8)
class PVZTransformProvider : public TransformProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZTransformProvider) == 16);

}
