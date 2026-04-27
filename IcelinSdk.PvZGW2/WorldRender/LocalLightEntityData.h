#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855A08
   RuntimeId:        1856
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B5E
   VfTable:          00000001422BBB40
   Address (Base):   00000001430E9D60
*/
#pragma pack(push, 16)
class LocalLightEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Enabled; /* 0x0060 */
  char pad_0061[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(LocalLightEntityData) == 112);

}
