#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837440
   RuntimeId:        04BE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          123C
   VfTable:          00000001421FA290
   Address (Base):   00000001430FE7D0
*/
#pragma pack(push, 8)
class UserMusicControllerNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Override; /* 0x0010 */
  AudioGraphNodePort Restore; /* 0x0018 */
  FB_BOOLEAN RestoreOnDeactivated; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UserMusicControllerNodeData) == 40);

}
