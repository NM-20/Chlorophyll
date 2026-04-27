#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNamedValue.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838140
   RuntimeId:        0586
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FFF
   VfTable:          00000001421F99A0
   Address (Base):   0000000143117070
*/
#pragma pack(push, 8)
class VoiceOverObject : public VoiceOverNamedValue
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class VoiceOverNamedValue) Properties; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverObject) == 40);

}
