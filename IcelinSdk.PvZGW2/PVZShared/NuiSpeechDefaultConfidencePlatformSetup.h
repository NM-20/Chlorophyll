#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/NuiSpeechConfidencePlatformSetupEntry.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861DE8
   RuntimeId:        1FF1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EDB
   VfTable:          0000000142344158
   Address (Base):   00000001431091B0
*/
#pragma pack(push, 8)
class NuiSpeechDefaultConfidencePlatformSetup : public NuiSpeechConfidencePlatformSetupEntry
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechDefaultConfidencePlatformSetup) == 16);

}
