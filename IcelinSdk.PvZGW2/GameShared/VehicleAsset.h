#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/VehicleBlueprint.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D878
   RuntimeId:        1147
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0796
   VfTable:          0000000142273CA8
   Address (Base):   0000000143111B50
*/
#pragma pack(push, 8)
class VehicleAsset : public VehicleBlueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(VehicleAsset) == 80);

}
