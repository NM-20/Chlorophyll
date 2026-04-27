#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>
#include <IcelinSdk.PvZGW2/PVZShared/ForceTauntBuffType.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CBE8
   RuntimeId:        2760
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0935
   VfTable:          0000000142366380
   Address (Base):   00000001430F64F0
*/
#pragma pack(push, 8)
class ForceTauntBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  ForceTauntBuffType BuffType; /* 0x0018 */
  FB_INT32 TauntId; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ForceTauntBuffEffectData) == 32);

}
