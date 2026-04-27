#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNodeConfigData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838970
   RuntimeId:        0606
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1186
   VfTable:          00000001421F9628
   Address (Base):   0000000143116650
*/
#pragma pack(push, 16)
class VoiceOverEventNodeConfigData : public VoiceOverNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class VoiceOverValueRedirect) Redirects; /* 0x0018 */
  Vec3 DebugColor; /* 0x0020 */
  FB_HANDLE(class VoiceOverEvent) Event; /* 0x0030 */
  FB_FLOAT32 DebugIntervalTime; /* 0x0038 */
  FB_BOOLEAN DebugEnabled; /* 0x003C */
  char pad_003D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverEventNodeConfigData) == 64);

}
