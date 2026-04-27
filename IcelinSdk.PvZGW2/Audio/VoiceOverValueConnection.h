#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838260
   RuntimeId:        0598
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BBDC0
   Default Value:    0000000142B88CF0
*/
#pragma pack(push, 8)
struct VoiceOverValueConnection
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class VoiceOverExpressionNode) TargetNode; /* 0x0000 */
  FB_HANDLE(class VoiceOverValue) TargetValue; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverValueConnection) == 16);

}
