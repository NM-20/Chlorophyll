#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/BaseDisplaySettings.h>

namespace fb
{

/* TypeInfo (Array): 00000001428522D0
   RuntimeId:        1556
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11DA
   VfTable:          000000014228DE00
   Address (Base):   000000014310EB50
*/
#pragma pack(push, 8)
class GlDisplaySettings : public BaseDisplaySettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(GlDisplaySettings) == 112);

}
