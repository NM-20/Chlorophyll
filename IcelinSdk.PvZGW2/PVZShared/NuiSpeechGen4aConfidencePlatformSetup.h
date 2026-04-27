#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/NuiSpeechConfidencePlatformSetupEntry.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861E08
   RuntimeId:        1FF3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EDC
   VfTable:          0000000142344168
   Address (Base):   0000000143109150
*/
#pragma pack(push, 8)
class NuiSpeechGen4aConfidencePlatformSetup : public NuiSpeechConfidencePlatformSetupEntry
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechGen4aConfidencePlatformSetup) == 16);

}
