#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428364B0
   RuntimeId:        03C7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0800
   VfTable:          00000001421F4C00
   Address (Base):   00000001430FFC70
*/
#pragma pack(push, 8)
class MixerAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MixerGraphData) Graph; /* 0x0018 */
  FB_REFARRAY(class MixerPreset) Presets; /* 0x0020 */
  FB_HANDLE(class MixerPreset) DefaultPreset; /* 0x0028 */
  FB_BOOLEAN Bypass; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(MixerAsset) == 56);

}
