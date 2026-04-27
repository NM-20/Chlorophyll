#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverExpressionNode.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverValueConnection.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838560
   RuntimeId:        05C8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DE4
   VfTable:          00000001421F97C0
   Address (Base):   00000001430FF3D0
*/
#pragma pack(push, 8)
class VoiceOverInfoNode : public VoiceOverExpressionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VoiceOverValueConnection Object; /* 0x0010 */
  FB_HANDLE(class VoiceOverValue) Value; /* 0x0020 */
  FB_HANDLE(class VoiceOverNamedValue) Field; /* 0x0028 */
  FB_HANDLE(class VoiceOverObject) ExpectedType; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverInfoNode) == 56);

}
