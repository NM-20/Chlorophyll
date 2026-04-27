#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855818
   RuntimeId:        184A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B58
   VfTable:          00000001422BBCF8
   Address (Base):   00000001430E9E20
*/
#pragma pack(push, 16)
class PlanarReflectionLocatorEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Enable; /* 0x0060 */
  char pad_0061[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(PlanarReflectionLocatorEntityData) == 112);

}
