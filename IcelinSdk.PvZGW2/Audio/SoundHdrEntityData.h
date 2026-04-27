#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837BB0
   RuntimeId:        0530
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C52
   VfTable:          00000001421F9C40
   Address (Base):   00000001430F2A60
*/
#pragma pack(push, 8)
class SoundHdrEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class HdrSetting) HdrSetting; /* 0x0018 */
  FB_BOOLEAN ApplySettingOnCreation; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SoundHdrEntityData) == 40);

}
