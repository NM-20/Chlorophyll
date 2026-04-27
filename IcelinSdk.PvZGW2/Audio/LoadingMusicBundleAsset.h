#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837FD0
   RuntimeId:        0572
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07EE
   VfTable:          00000001421F9A38
   Address (Base):   0000000143117130
*/
#pragma pack(push, 8)
class LoadingMusicBundleAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SoundAsset) Assets; /* 0x0018 */
  FB_CSTRING UniqueId; /* 0x0020 */
  FB_CSTRING SuperBundle; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(LoadingMusicBundleAsset) == 48);

}
