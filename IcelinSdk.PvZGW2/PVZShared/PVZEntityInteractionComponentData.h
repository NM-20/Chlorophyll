#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428639E8
   RuntimeId:        213B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D9C
   VfTable:          0000000142353418
   Address (Base):   00000001430E67C0
*/
#pragma pack(push, 16)
class PVZEntityInteractionComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class PVZInteractionData) Interactions; /* 0x0070 */
  FB_STDARRAY(FB_INT32) CanInteractRestrictions; /* 0x0078 */
  FB_BOOLEAN ShowDamagedPlayers; /* 0x0080 */
  char pad_0081[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(PVZEntityInteractionComponentData) == 144);

}
