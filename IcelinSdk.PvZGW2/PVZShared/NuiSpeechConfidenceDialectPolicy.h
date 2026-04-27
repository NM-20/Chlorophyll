#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/Dialect.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861D88
   RuntimeId:        1FEB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FD8
   VfTable:          0000000142344188
   Address (Base):   0000000143109270
*/
#pragma pack(push, 8)
class NuiSpeechConfidenceDialectPolicy : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Dialect Dialect; /* 0x0010 */
  char pad_0014[0x0004];
  FB_HANDLE(class NuiSpeechConfidencePolicy) Policy; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechConfidenceDialectPolicy) == 32);

}
