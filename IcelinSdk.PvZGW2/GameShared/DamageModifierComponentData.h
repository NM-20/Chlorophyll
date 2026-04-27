#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E828
   RuntimeId:        1217
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DA3
   VfTable:          0000000142272E70
   Address (Base):   00000001430ECB80
*/
#pragma pack(push, 16)
class DamageModifierComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(DamageModifierComponentData) == 112);

}
