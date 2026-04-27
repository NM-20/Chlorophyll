#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861C88
   RuntimeId:        1FDB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11C0
   VfTable:          0000000142344278
   Address (Base):   0000000143109570
*/
#pragma pack(push, 8)
class NuiSpeechSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class NuiSpeechDialect) DialectsConfiguration; /* 0x0020 */
  FB_HANDLE(class NuiSpeechConfidencePolicySetup) DefaultConfidencePolicy; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechSettings) == 48);

}
