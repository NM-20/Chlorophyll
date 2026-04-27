#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428655D8
   RuntimeId:        22D3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ADD
   VfTable:          00000001423514E0
   Address (Base):   00000001430E5CE0
*/
#pragma pack(push, 8)
class GlobalEffectPlayerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class GlobalEffectsMapAsset) EffectsMapAsset; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(GlobalEffectPlayerEntityData) == 32);

}
