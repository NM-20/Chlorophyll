#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C808
   RuntimeId:        2722
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0927
   VfTable:          00000001423664B8
   Address (Base):   00000001430F5EF0
*/
#pragma pack(push, 8)
class UIDisableRespawnBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIDisableRespawnBuffEffectData) == 24);

}
