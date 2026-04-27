#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428493E0
   RuntimeId:        0D7E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A57
   VfTable:          0000000142260198
   Address (Base):   00000001430EDD20
*/
#pragma pack(push, 8)
class FadeEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 FadeTime; /* 0x0018 */
  FB_FLOAT32 MaxWaitFadedWhileStreamingTime; /* 0x001C */
  FB_BOOLEAN FadeScreen; /* 0x0020 */
  FB_BOOLEAN FadeUI; /* 0x0021 */
  FB_BOOLEAN FadeAudio; /* 0x0022 */
  FB_BOOLEAN FadeMovie; /* 0x0023 */
  FB_BOOLEAN FadeRumble; /* 0x0024 */
  FB_BOOLEAN FadeCameraShake; /* 0x0025 */
  FB_BOOLEAN StartFaded; /* 0x0026 */
  FB_BOOLEAN SuppressLoadIcon; /* 0x0027 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(FadeEntityData) == 40);

}
