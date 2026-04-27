#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CC08
   RuntimeId:        2762
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0929
   VfTable:          0000000142366398
   Address (Base):   00000001430F6490
*/
#pragma pack(push, 8)
class DamageModifierBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 PowerThreshold; /* 0x0018 */
  FB_FLOAT32 DamageScale; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(DamageModifierBuffEffectData) == 32);

}
