#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870E48
   RuntimeId:        2A0F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A78
   VfTable:          000000014236D020
   Address (Base):   00000001430E3220
*/
#pragma pack(push, 8)
class UIProgressionInfoEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct XPMultiplierIcons) XPMultiplierIcons; /* 0x0018 */
  FB_FLOAT32 LevelUpDelay; /* 0x0020 */
  FB_INT32 ManualPopupType; /* 0x0024 */
  FB_CSTRING ManualTitleText; /* 0x0028 */
  FB_CSTRING ManualDescriptionText; /* 0x0030 */
  FB_CSTRING ManualIconId; /* 0x0038 */
  FB_BOOLEAN EnablePopups; /* 0x0040 */
  FB_BOOLEAN UseXPUpdate; /* 0x0041 */
  FB_BOOLEAN ManualIsGenerationReward; /* 0x0042 */
  char pad_0043[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UIProgressionInfoEntityData) == 72);

}
