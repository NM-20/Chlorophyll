#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837420
   RuntimeId:        04BC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          126D
   VfTable:          00000001421FA2A0
   Address (Base):   0000000143117A90
*/
#pragma pack(push, 8)
class UserMusicArbiterNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Out; /* 0x0018 */
  SoundGraphPluginRef Plugin; /* 0x0020 */
  char pad_0023[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UserMusicArbiterNodeData) == 40);

}
