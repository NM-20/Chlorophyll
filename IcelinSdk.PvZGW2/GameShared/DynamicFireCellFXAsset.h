#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableFloat.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A760
   RuntimeId:        0EA4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0766
   VfTable:          0000000142265478
   Address (Base):   0000000143113B90
*/
#pragma pack(push, 8)
class DynamicFireCellFXAsset : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class CellFX) CellFXList; /* 0x0018 */
  QualityScalableFloat MinSmokeSeparationDistance; /* 0x0020 */
  FB_REFARRAY(class EffectBlueprint) SmokeEffect; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(DynamicFireCellFXAsset) == 56);

}
