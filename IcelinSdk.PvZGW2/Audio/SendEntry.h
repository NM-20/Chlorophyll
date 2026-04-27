#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835CE8
   RuntimeId:        034D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          119F
   VfTable:          00000001421F16D0
   Address (Base):   0000000143119410
*/
#pragma pack(push, 8)
class SendEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  FB_HANDLE(class AudioGraphParameter) Target; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SendEntry) == 32);

}
