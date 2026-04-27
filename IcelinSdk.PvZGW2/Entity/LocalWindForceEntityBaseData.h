#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BB58
   RuntimeId:        092E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AFC
   VfTable:          0000000142212600
   Address (Base):   00000001430DC770
*/
#pragma pack(push, 16)
class LocalWindForceEntityBaseData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Strength; /* 0x0060 */
  FB_FLOAT32 Variation; /* 0x0064 */
  FB_FLOAT32 VariationRate; /* 0x0068 */
  FB_FLOAT32 MicroVariation; /* 0x006C */
  FB_FLOAT32 Hardness; /* 0x0070 */
  FB_FLOAT32 ForceAsInstantVelocity; /* 0x0074 */
  FB_HANDLE(class ForceGroupAsset) ForceGroup; /* 0x0078 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(LocalWindForceEntityBaseData) == 128);

}
