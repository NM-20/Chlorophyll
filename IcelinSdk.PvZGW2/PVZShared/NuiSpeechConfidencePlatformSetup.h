#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861DA8
   RuntimeId:        1FED
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06B3
   VfTable:          0000000142344198
   Address (Base):   0000000143109210
*/
#pragma pack(push, 8)
class NuiSpeechConfidencePlatformSetup : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class NuiSpeechConfidencePlatformSetupEntry) Entry; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechConfidencePlatformSetup) == 32);

}
