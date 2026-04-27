#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835C68
   RuntimeId:        0345
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          121E
   VfTable:          00000001421F1710
   Address (Base):   0000000143100450
*/
#pragma pack(push, 8)
class RangeMapperNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  AudioGraphNodePort Out; /* 0x0018 */
  FB_STDARRAY(struct RangeMapperEntry) Ranges; /* 0x0020 */
  FB_FLOAT32 DefaultOutputValue; /* 0x0028 */
  FB_BOOLEAN DefaultOutputValueEnabled; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(RangeMapperNodeData) == 48);

}
