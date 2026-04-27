#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863D28
   RuntimeId:        216F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DB4
   VfTable:          0000000142353160
   Address (Base):   00000001430E7600
*/
#pragma pack(push, 16)
class PvZCooldownOnMeleeDefendedComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Cooldown; /* 0x0070 */
  char pad_0074[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PvZCooldownOnMeleeDefendedComponentData) == 128);

}
