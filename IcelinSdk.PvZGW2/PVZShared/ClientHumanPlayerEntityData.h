#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428655F8
   RuntimeId:        22D5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C3D
   VfTable:          0000000142351280
   Address (Base):   00000001430E64C0
*/
#pragma pack(push, 8)
class ClientHumanPlayerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ClientHumanPlayerEntityData) == 24);

}
