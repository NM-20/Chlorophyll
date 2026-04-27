#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundAsset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428365F0
   RuntimeId:        03DB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0636
   VfTable:          00000001421F4B58
   Address (Base):   00000001430FFC10
*/
#pragma pack(push, 8)
class SoundGraphAsset : public SoundAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundGraphData) Graph; /* 0x0028 */
  FB_HANDLE(class MixerAsset) Mixer; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SoundGraphAsset) == 56);

}
