#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BB78
   RuntimeId:        0930
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D4E
   VfTable:          0000000142212638
   Address (Base):   00000001430D0F20
*/
#pragma pack(push, 16)
class LocalWindForceComponentBaseData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Strength; /* 0x0070 */
  FB_FLOAT32 Variation; /* 0x0074 */
  FB_FLOAT32 VariationRate; /* 0x0078 */
  FB_FLOAT32 MicroVariation; /* 0x007C */
  FB_FLOAT32 Hardness; /* 0x0080 */
  FB_FLOAT32 ForceAsInstantVelocity; /* 0x0084 */
  FB_HANDLE(class ForceGroupAsset) ForceGroup; /* 0x0088 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(LocalWindForceComponentBaseData) == 144);

}
