#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverExpressionNode.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverValueConnection.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverCompareExpressionType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838340
   RuntimeId:        05A6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DDC
   VfTable:          00000001421F98D0
   Address (Base):   00000001430FF790
*/
#pragma pack(push, 8)
class VoiceOverCompareNode : public VoiceOverExpressionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VoiceOverValueConnection A; /* 0x0010 */
  VoiceOverValueConnection B; /* 0x0020 */
  FB_HANDLE(class VoiceOverValue) False; /* 0x0030 */
  FB_HANDLE(class VoiceOverValue) True; /* 0x0038 */
  VoiceOverCompareExpressionType Operation; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverCompareNode) == 72);

}
