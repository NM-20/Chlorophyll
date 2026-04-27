#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850978
   RuntimeId:        13D3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B78
   VfTable:          000000014227C658
   Address (Base):   00000001430EB620
*/
#pragma pack(push, 16)
class RepulsorControllerEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class RadiusData) radiusData; /* 0x0060 */
  FB_BOOLEAN ActiveAtStart; /* 0x0068 */
  char pad_0069[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(RepulsorControllerEntityData) == 112);

}
