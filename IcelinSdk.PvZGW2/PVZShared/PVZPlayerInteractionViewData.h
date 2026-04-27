#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PlayerInteractionViewData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868F10
   RuntimeId:        2443
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E8F
   VfTable:          0000000142356120
   Address (Base):   00000001430F7990
*/
#pragma pack(push, 8)
class PVZPlayerInteractionViewData : public PlayerInteractionViewData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZPlayerInteractionViewData) == 16);

}
