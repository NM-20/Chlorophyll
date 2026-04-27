#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835CC8
   RuntimeId:        034B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1269
   VfTable:          00000001421F16E0
   Address (Base):   00000001431003F0
*/
#pragma pack(push, 8)
class ScaleClampNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort InMin; /* 0x0018 */
  AudioGraphNodePort InMax; /* 0x0020 */
  AudioGraphNodePort OutMin; /* 0x0028 */
  AudioGraphNodePort OutMax; /* 0x0030 */
  AudioGraphNodePort Out; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ScaleClampNodeData) == 64);

}
