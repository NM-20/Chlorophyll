#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameObjectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A8C8
   RuntimeId:        0807
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0992
   VfTable:          000000014220C168
   Address (Base):   00000001430B4110
*/
#pragma pack(push, 8)
class EntityData : public GameObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EntityData) == 24);

}
