#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverExpressionNode.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverValueConnection.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverCompareExpressionType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428384E0
   RuntimeId:        05C0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DE6
   VfTable:          00000001421F9800
   Address (Base):   00000001430FF490
*/
#pragma pack(push, 8)
class VoiceOverDistanceNode : public VoiceOverExpressionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VoiceOverValueConnection A; /* 0x0010 */
  VoiceOverValueConnection B; /* 0x0020 */
  VoiceOverValueConnection Threshold; /* 0x0030 */
  FB_HANDLE(class VoiceOverValue) Distance; /* 0x0040 */
  FB_HANDLE(class VoiceOverValue) False; /* 0x0048 */
  FB_HANDLE(class VoiceOverValue) True; /* 0x0050 */
  VoiceOverCompareExpressionType Operation; /* 0x0058 */
  char pad_005C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverDistanceNode) == 96);

}
