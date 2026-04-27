#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BB98
   RuntimeId:        0932
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B3A
   VfTable:          00000001422125C8
   Address (Base):   00000001430EEC80
*/
#pragma pack(push, 16)
class LocalWindForceSamplerEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Radius; /* 0x0060 */
  char pad_0064[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(LocalWindForceSamplerEntityData) == 112);

}
