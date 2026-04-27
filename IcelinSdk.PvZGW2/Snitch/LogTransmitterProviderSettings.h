#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 00000001428749B8
   RuntimeId:        2C6F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11C4
   VfTable:          000000014238AAB0
   Address (Base):   0000000143103FF0
*/
#pragma pack(push, 8)
class LogTransmitterProviderSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Url; /* 0x0020 */
  FB_BOOLEAN Enabled; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(LogTransmitterProviderSettings) == 48);

}
