#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverConstantValue.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838440
   RuntimeId:        05B6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          083A
   VfTable:          00000001421F9850
   Address (Base):   00000001430FF5B0
*/
#pragma pack(push, 16)
class VoiceOverConstantVectorValue : public VoiceOverConstantValue
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec4 Value; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverConstantVectorValue) == 32);

}
