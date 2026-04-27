#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ChassisComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CDD8
   RuntimeId:        10B8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DBF
   VfTable:          0000000142267270
   Address (Base):   00000001430D6C10
*/
#pragma pack(push, 16)
class VehicleComponentData : public ChassisComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(VehicleComponentData) == 224);

}
