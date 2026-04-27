#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D1F8
   RuntimeId:        27AD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10DB
   VfTable:          0000000142366050
   Address (Base):   00000001430E4540
*/
#pragma pack(push, 8)
class PVZFloatProvider : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZFloatProvider) == 16);

}
