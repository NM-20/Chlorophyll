#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CB88
   RuntimeId:        275A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          090F
   VfTable:          00000001423662A8
   Address (Base):   00000001430F7270
*/
#pragma pack(push, 8)
class LowGravModeBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(LowGravModeBuffEffectData) == 24);

}
