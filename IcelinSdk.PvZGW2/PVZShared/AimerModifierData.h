#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D588
   RuntimeId:        27F8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0718
   VfTable:          00000001423701F0
   Address (Base):   0000000143105BB0
*/
#pragma pack(push, 8)
class AimerModifierData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 LookSpeedMultiplier; /* 0x0018 */
  FB_BOOLEAN OnlyInSupportedShooting; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AimerModifierData) == 32);

}
