#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865528
   RuntimeId:        22C9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BE7
   VfTable:          00000001423515C0
   Address (Base):   00000001430E5860
*/
#pragma pack(push, 8)
class ClientPlayerManagerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 PlayerListIndex; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ClientPlayerManagerEntityData) == 32);

}
