#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C768
   RuntimeId:        2718
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0942
   VfTable:          0000000142366650
   Address (Base):   00000001430F6070
*/
#pragma pack(push, 8)
class RootingVFXBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 RootedPowerThreshold; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(RootingVFXBuffEffectData) == 32);

}
