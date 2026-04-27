#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/GamePlatform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861D68
   RuntimeId:        1FE9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1101
   VfTable:          00000001423441A8
   Address (Base):   00000001431092D0
*/
#pragma pack(push, 8)
class NuiSpeechConfidencePlatformPolicy : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  GamePlatform Platform; /* 0x0010 */
  char pad_0014[0x0004];
  FB_HANDLE(class NuiSpeechConfidencePolicy) DefaultPolicy; /* 0x0018 */
  FB_REFARRAY(class NuiSpeechConfidenceDialectPolicy) DialectPolicies; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechConfidencePlatformPolicy) == 40);

}
