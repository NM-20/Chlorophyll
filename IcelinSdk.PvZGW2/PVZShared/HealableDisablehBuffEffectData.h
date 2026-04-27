#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CD28
   RuntimeId:        2774
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0903
   VfTable:          00000001423661C0
   Address (Base):   00000001430F6370
*/
#pragma pack(push, 8)
class HealableDisablehBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(HealableDisablehBuffEffectData) == 24);

}
