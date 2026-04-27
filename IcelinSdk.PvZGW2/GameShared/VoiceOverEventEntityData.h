#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AA60
   RuntimeId:        0EC7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C8A
   VfTable:          0000000142263B20
   Address (Base):   00000001430ED7E0
*/
#pragma pack(push, 8)
class VoiceOverEventEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VoiceOverEvent) VoEvent; /* 0x0018 */
  FB_HANDLE(class VoiceOverNamedValue) EventPlayer; /* 0x0020 */
  FB_HANDLE(class VoiceOverNamedValue) ExtraEventPlayer; /* 0x0028 */
  FB_FLOAT32 TriggerDelay; /* 0x0030 */
  FB_FLOAT32 FinishedDelay; /* 0x0034 */
  FB_BOOLEAN RunOnce; /* 0x0038 */
  char pad_0039[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverEventEntityData) == 64);

}
