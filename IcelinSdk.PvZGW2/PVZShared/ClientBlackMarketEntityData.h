#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871728
   RuntimeId:        2A75
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C10
   VfTable:          000000014236C878
   Address (Base):   00000001430E3E20
*/
#pragma pack(push, 8)
class ClientBlackMarketEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 SelectedIndex; /* 0x0018 */
  FB_FLOAT32 Duration; /* 0x001C */
  FB_BOOLEAN IsDataProvider; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ClientBlackMarketEntityData) == 40);

}
