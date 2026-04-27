#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876D98
   RuntimeId:        2E28
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07E6
   VfTable:          0000000142395AA8
   Address (Base):   0000000143102C70
*/
#pragma pack(push, 8)
class WaterEffectSetup : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct WaterAmbientFoamEffectSpawner) AmbientEffects; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WaterEffectSetup) == 32);

}
