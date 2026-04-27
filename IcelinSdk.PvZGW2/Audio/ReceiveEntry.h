#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835C88
   RuntimeId:        0347
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11A7
   VfTable:          00000001421F1700
   Address (Base):   0000000143119470
*/
#pragma pack(push, 8)
class ReceiveEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Out; /* 0x0010 */
  FB_HANDLE(class AudioGraphParameter) Source; /* 0x0018 */
  FB_FLOAT32 Parameter; /* 0x0020 */
  FB_FLOAT32 SavedValue; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ReceiveEntry) == 40);

}
