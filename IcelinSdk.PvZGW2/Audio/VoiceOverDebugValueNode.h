#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverExpressionNode.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverValueConnection.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 00000001428384A0
   RuntimeId:        05BC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DDF
   VfTable:          00000001421F9820
   Address (Base):   00000001430FF4F0
*/
#pragma pack(push, 16)
class VoiceOverDebugValueNode : public VoiceOverExpressionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VoiceOverValueConnection In; /* 0x0010 */
  Vec3 Color; /* 0x0020 */
  FB_HANDLE(class VoiceOverValue) Out; /* 0x0030 */
  FB_CSTRING ValueName; /* 0x0038 */
  FB_FLOAT32 Min; /* 0x0040 */
  FB_FLOAT32 Max; /* 0x0044 */
  FB_FLOAT32 DisplayTime; /* 0x0048 */
  FB_BOOLEAN Plot; /* 0x004C */
  FB_BOOLEAN Enabled; /* 0x004D */
  char pad_004E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverDebugValueNode) == 80);

}
