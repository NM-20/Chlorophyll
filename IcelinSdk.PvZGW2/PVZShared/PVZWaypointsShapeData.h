#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/WaypointsShapeData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428730B0
   RuntimeId:        2B84
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0973
   VfTable:          0000000142379620
   Address (Base):   0000000143104B30
*/
#pragma pack(push, 8)
class PVZWaypointsShapeData : public WaypointsShapeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZWaypointsShapeData) == 48);

}
