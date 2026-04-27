#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Morph/MorphTintPresetChannel.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F9E8
   RuntimeId:        1313
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07BD
   VfTable:          00000001422771F0
   Address (Base):   0000000143110770
*/
#pragma pack(push, 16)
class MorphTintPreset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  MorphTintPresetChannel RChannel; /* 0x0020 */
  MorphTintPresetChannel GChannel; /* 0x0060 */
  MorphTintPresetChannel BChannel; /* 0x00A0 */
  MorphTintPresetChannel AChannel; /* 0x00E0 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */
#pragma pack(pop)

static_assert(sizeof(MorphTintPreset) == 288);

}
