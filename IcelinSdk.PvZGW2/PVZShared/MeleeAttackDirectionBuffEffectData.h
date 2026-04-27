#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CCC8
   RuntimeId:        276E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          090C
   VfTable:          0000000142366208
   Address (Base):   00000001430D9470
*/
#pragma pack(push, 8)
class MeleeAttackDirectionBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MeleeAttackDirectionBuffEffectData) == 24);

}
