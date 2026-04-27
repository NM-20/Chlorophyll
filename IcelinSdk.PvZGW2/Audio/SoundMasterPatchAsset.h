#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836670
   RuntimeId:        03E3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0674
   VfTable:          00000001421F4B38
   Address (Base):   0000000143118BD0
*/
#pragma pack(push, 8)
class SoundMasterPatchAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundGraphData) Graph; /* 0x0018 */
  FB_REFARRAY(class SoundBusData) Busses; /* 0x0020 */
  FB_HANDLE(class SoundBusData) RwMovieBus; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SoundMasterPatchAsset) == 48);

}
