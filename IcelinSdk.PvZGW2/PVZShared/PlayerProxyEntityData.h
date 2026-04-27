#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864DD8
   RuntimeId:        225A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A92
   VfTable:          0000000142351CE8
   Address (Base):   00000001430E66A0
*/
#pragma pack(push, 8)
class PlayerProxyEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PlayerProxyEntityData) == 24);

}
