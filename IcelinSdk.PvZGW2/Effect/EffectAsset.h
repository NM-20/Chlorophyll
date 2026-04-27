#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Effect/EffectBlueprint.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839230
   RuntimeId:        067B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          079F
   VfTable:          00000001421FEA50
   Address (Base):   0000000143115ED0
*/
#pragma pack(push, 8)
class EffectAsset : public EffectBlueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(EffectAsset) == 80);

}
