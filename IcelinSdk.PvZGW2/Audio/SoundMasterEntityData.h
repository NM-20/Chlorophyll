#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837B10
   RuntimeId:        0526
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AA2
   VfTable:          00000001421F9D58
   Address (Base):   00000001430F2C40
*/
#pragma pack(push, 8)
class SoundMasterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundMasterPatchAsset) Master; /* 0x0018 */
  FB_BOOLEAN SupportDynamicPropeties; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SoundMasterEntityData) == 40);

}
