#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/SubViewData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BA10
   RuntimeId:        0F9E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E90
   VfTable:          0000000142268550
   Address (Base):   00000001431132F0
*/
#pragma pack(push, 8)
class SpectatorSubViewData : public SubViewData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(SpectatorSubViewData) == 16);

}
