#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/GameDataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B028
   RuntimeId:        2606
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0964
   VfTable:          000000014235ADA0
   Address (Base):   00000001431069F0
*/
#pragma pack(push, 8)
class PunchComboBehaviorData : public GameDataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ComboInputTimeWindow; /* 0x0010 */
  FB_UINT32 ComboLevelLimit; /* 0x0014 */
  FB_STDARRAY(struct PunchAnimBehaviorData) AnimBehaviorPerComboLevel; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PunchComboBehaviorData) == 32);

}
