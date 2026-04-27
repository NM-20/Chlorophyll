#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverNodeConfigData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838580
   RuntimeId:        05CA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1178
   VfTable:          00000001421F97B0
   Address (Base):   0000000143116AD0
*/
#pragma pack(push, 8)
class VoiceOverInfoNodeConfigData : public VoiceOverNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VoiceOverNamedValue) Field; /* 0x0018 */
  FB_HANDLE(class VoiceOverObject) ExpectedType; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverInfoNodeConfigData) == 40);

}
