#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837C30
   RuntimeId:        0538
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A0B
   VfTable:          00000001421F9B98
   Address (Base):   00000001430DCB30
*/
#pragma pack(push, 8)
class SoundAssetSwitcherEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundAsset) Default; /* 0x0018 */
  FB_STDARRAY(struct SoundAssetSwitcherEntry) Entries; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SoundAssetSwitcherEntityData) == 40);

}
