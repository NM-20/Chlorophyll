#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861DC8
   RuntimeId:        1FEF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EDA
   VfTable:          0000000142344178
   Address (Base):   00000001430E8560
*/
#pragma pack(push, 8)
class NuiSpeechConfidencePlatformSetupEntry : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechConfidencePlatformSetupEntry) == 16);

}
