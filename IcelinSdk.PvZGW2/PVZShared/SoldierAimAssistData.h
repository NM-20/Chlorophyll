#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/GameDataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DB38
   RuntimeId:        283E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0967
   VfTable:          000000014236EED8
   Address (Base):   00000001431058B0
*/
#pragma pack(push, 8)
class SoldierAimAssistData : public GameDataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct AimAssistData) Levels; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SoldierAimAssistData) == 24);

}
