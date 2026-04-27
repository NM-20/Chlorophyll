#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861D48
   RuntimeId:        1FE7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07D7
   VfTable:          0000000142344108
   Address (Base):   0000000143109330
*/
#pragma pack(push, 8)
class NuiSpeechConfidencePolicySetup : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class NuiSpeechConfidencePlatformPolicy) CurrentPlatformPolicy; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechConfidencePolicySetup) == 32);

}
