#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FA08
   RuntimeId:        1315
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06CC
   VfTable:          0000000142277218
   Address (Base):   0000000143110710
*/
#pragma pack(push, 8)
class MorphTintPresetGroup : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MorphTintPreset) Presets; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MorphTintPresetGroup) == 32);

}
