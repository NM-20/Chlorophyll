#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835738
   RuntimeId:        02F3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1255
   VfTable:          00000001421F1928
   Address (Base):   0000000143100B70
*/
#pragma pack(push, 8)
class AdsrNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Trigger; /* 0x0010 */
  AudioGraphNodePort Release; /* 0x0018 */
  AudioGraphNodePort A; /* 0x0020 */
  AudioGraphNodePort D; /* 0x0028 */
  AudioGraphNodePort S; /* 0x0030 */
  AudioGraphNodePort R; /* 0x0038 */
  AudioGraphNodePort Value; /* 0x0040 */
  AudioGraphNodePort Finished; /* 0x0048 */
  FB_FLOAT32 Scale; /* 0x0050 */
  char pad_0054[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(AdsrNodeData) == 88);

}
