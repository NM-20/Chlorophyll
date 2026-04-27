#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsMaterialRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428499D8
   RuntimeId:        0DD8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          116B
   VfTable:          000000014225F988
   Address (Base):   00000001430C0130
*/
#pragma pack(push, 8)
class MaterialPropertySoundData : public PhysicsMaterialRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundAsset) ImpactSound; /* 0x0010 */
  FB_HANDLE(class SoundAsset) ScrapeSound; /* 0x0018 */
  FB_FLOAT32 ScrapeLength; /* 0x0020 */
  char pad_0024[0x0004];
  FB_HANDLE(class MaterialSoldierSoundSettings) SoldierSettings; /* 0x0028 */
  FB_FLOAT32 Softness; /* 0x0030 */
  FB_FLOAT32 MaterialSoundId; /* 0x0034 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(MaterialPropertySoundData) == 56);

}
