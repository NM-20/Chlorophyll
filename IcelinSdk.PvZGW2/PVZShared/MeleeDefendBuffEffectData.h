#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CA08
   RuntimeId:        2742
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0930
   VfTable:          0000000142366470
   Address (Base):   00000001430D95F0
*/
#pragma pack(push, 8)
class MeleeDefendBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 MeleeType; /* 0x0018 */
  FB_FLOAT32 AttackerRecoveryTime; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MeleeDefendBuffEffectData) == 32);

}
