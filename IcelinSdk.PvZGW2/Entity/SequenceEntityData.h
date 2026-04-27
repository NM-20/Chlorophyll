#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Entity/UpdatePass.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BE50
   RuntimeId:        095C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A15
   VfTable:          00000001422123C0
   Address (Base):   00000001430D7C30
*/
#pragma pack(push, 8)
class SequenceEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct SequenceEventData) Events; /* 0x0018 */
  FB_INT32 SequenceStartTime; /* 0x0020 */
  FB_INT32 SequenceLength; /* 0x0024 */
  Realm Realm; /* 0x0028 */
  char pad_002C[0x0004];
  FB_REFARRAY(class PropertyTrackData) PropertyTracks; /* 0x0030 */
  FB_REFARRAY(class CustomSequenceTrackData) CustomSequenceTracks; /* 0x0038 */
  UpdatePass ClientUpdatePass; /* 0x0040 */
  UpdatePass ServerUpdatePass; /* 0x0044 */
  FB_FLOAT32 ExternalTime; /* 0x0048 */
  FB_FLOAT32 PlaybackSpeed; /* 0x004C */
  FB_BOOLEAN Looping; /* 0x0050 */
  FB_BOOLEAN AutoStart; /* 0x0051 */
  FB_BOOLEAN AutoPlayFirstFrame; /* 0x0052 */
  FB_BOOLEAN PlayInReverse; /* 0x0053 */
  char pad_0054[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(SequenceEntityData) == 88);

}
