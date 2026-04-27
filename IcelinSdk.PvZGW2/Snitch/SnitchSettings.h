#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874A38
   RuntimeId:        2C77
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11E5
   VfTable:          000000014238AAD0
   Address (Base):   0000000143103E70
*/
#pragma pack(push, 8)
class SnitchSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Enabled; /* 0x0020 */
  FB_BOOLEAN EditorialConfigEnabled; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SnitchSettings) == 40);

}
