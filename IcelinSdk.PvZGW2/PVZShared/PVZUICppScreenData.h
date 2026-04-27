#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UILegacyCppScreenData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871788
   RuntimeId:        2A7B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06F0
   VfTable:          000000014236C6A8
   Address (Base):   00000001430D3190
*/
#pragma pack(push, 8)
class PVZUICppScreenData : public UILegacyCppScreenData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN UseHudScaling; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZUICppScreenData) == 48);

}
