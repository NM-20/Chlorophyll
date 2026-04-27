#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C608
   RuntimeId:        2702
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          091F
   VfTable:          0000000142366620
   Address (Base):   00000001430D9890
*/
#pragma pack(push, 8)
class IgnoreCharacterCollisionBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinPowerThreshold; /* 0x0018 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(IgnoreCharacterCollisionBuffEffectData) == 32);

}
