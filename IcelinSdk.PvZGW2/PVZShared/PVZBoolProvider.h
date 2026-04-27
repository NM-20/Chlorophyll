#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D1D8
   RuntimeId:        27AB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          107D
   VfTable:          0000000142366090
   Address (Base):   00000001430E45A0
*/
#pragma pack(push, 8)
class PVZBoolProvider : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZBoolProvider) == 16);

}
