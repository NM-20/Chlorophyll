#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverExpressionNode.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverValueConnection.h>

namespace fb
{

/* TypeInfo (Array): 00000001428385A0
   RuntimeId:        05CC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DE3
   VfTable:          00000001421F97A0
   Address (Base):   00000001430FF370
*/
#pragma pack(push, 8)
class VoiceOverIntervalNode : public VoiceOverExpressionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VoiceOverValueConnection Threshold; /* 0x0010 */
  FB_HANDLE(class VoiceOverValue) Time; /* 0x0020 */
  FB_HANDLE(class VoiceOverValue) False; /* 0x0028 */
  FB_HANDLE(class VoiceOverValue) True; /* 0x0030 */
  FB_HANDLE(class VoiceOverInterval) Interval; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverIntervalNode) == 64);

}
