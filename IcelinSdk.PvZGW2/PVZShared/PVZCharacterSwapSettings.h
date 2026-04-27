#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868A10
   RuntimeId:        2413
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11BC
   VfTable:          000000014234E950
   Address (Base):   00000001430D0140
*/
#pragma pack(push, 8)
class PVZCharacterSwapSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 TicksToQueueSwap; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterSwapSettings) == 40);

}
