#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871648
   RuntimeId:        2A6B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A56
   VfTable:          000000014236C9F0
   Address (Base):   00000001430E26E0
*/
#pragma pack(push, 8)
class ClientUIBadConnectionEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ClientUIBadConnectionEntityData) == 24);

}
