#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/SubViewData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868EF0
   RuntimeId:        2441
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E8E
   VfTable:          0000000142356108
   Address (Base):   00000001430E4D80
*/
#pragma pack(push, 8)
class PlayerInteractionViewData : public SubViewData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PlayerInteractionViewData) == 16);

}
