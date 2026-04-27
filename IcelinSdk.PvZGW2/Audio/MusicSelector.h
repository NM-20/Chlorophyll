#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Audio/MusicSelectorTriggerType.h>
#include <IcelinSdk.PvZGW2/Audio/MusicSyncType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837EB0
   RuntimeId:        0560
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11F1
   VfTable:          00000001421F9A98
   Address (Base):   0000000143117250
*/
#pragma pack(push, 8)
class MusicSelector : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MusicEventData) Event; /* 0x0010 */
  MusicSelectorTriggerType TriggerType; /* 0x0018 */
  MusicSyncType SyncType; /* 0x001C */
  FB_HANDLE(class MusicStreamableData) Target; /* 0x0020 */
  FB_HANDLE(class MusicTransition) Default; /* 0x0028 */
  FB_REFARRAY(class MusicTransition) Transitions; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(MusicSelector) == 56);

}
