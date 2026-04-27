#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863F08
   RuntimeId:        218D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DAC
   VfTable:          0000000142352E68
   Address (Base):   00000001430D4210
*/
#pragma pack(push, 16)
class EntityOwnerPlayerComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(EntityOwnerPlayerComponentData) == 112);

}
