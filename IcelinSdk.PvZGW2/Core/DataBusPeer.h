#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/GameDataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833450
   RuntimeId:        0101
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0968
   VfTable:          00000001421E5218
   Address (Base):   00000001431011D0
*/
#pragma pack(push, 8)
class DataBusPeer : public GameDataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 Flags; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(DataBusPeer) == 24);

}
