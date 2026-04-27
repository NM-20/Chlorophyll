#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C088
   RuntimeId:        26C0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D46
   VfTable:          00000001423669A0
   Address (Base):   00000001430D3310
*/
#pragma pack(push, 16)
class BuffComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class BuffData) Buffs; /* 0x0070 */
  FB_STDARRAY(struct DefaultBuffStateModifierData) BuffStateModifiers; /* 0x0078 */
  FB_REFARRAY(class BuffTypeData) BuffImmunityTypes; /* 0x0080 */
  FB_STDARRAY(struct PersistentBuff) PersistentBuffs; /* 0x0088 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(BuffComponentData) == 144);

}
