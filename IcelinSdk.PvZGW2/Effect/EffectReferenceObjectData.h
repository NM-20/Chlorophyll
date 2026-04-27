#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialReferenceObjectData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428391D0
   RuntimeId:        0675
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0988
   VfTable:          00000001421FEAA0
   Address (Base):   00000001430D0F80
*/
#pragma pack(push, 16)
class EffectReferenceObjectData : public SpatialReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class EffectParameter) EffectParameters; /* 0x00A0 */
  FB_BOOLEAN AutoStart; /* 0x00A8 */
  FB_BOOLEAN AffectedByLightprobeVisibility; /* 0x00A9 */
  char pad_00AA[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(EffectReferenceObjectData) == 176);

}
