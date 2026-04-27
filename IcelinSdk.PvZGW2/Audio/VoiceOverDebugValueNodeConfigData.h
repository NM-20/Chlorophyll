#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNodeConfigData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 00000001428384C0
   RuntimeId:        05BE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          117B
   VfTable:          00000001421F9810
   Address (Base):   0000000143116BF0
*/
#pragma pack(push, 16)
class VoiceOverDebugValueNodeConfigData : public VoiceOverNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0018 */
  Vec3 Color; /* 0x0020 */
  FB_FLOAT32 DisplayTime; /* 0x0030 */
  FB_BOOLEAN Enabled; /* 0x0034 */
  char pad_0035[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverDebugValueNodeConfigData) == 64);

}
