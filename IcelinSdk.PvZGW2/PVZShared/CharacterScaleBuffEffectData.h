#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CC48
   RuntimeId:        2766
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          092C
   VfTable:          0000000142366368
   Address (Base):   00000001430F6430
*/
#pragma pack(push, 8)
class CharacterScaleBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinScale; /* 0x0018 */
  FB_FLOAT32 MaxScale; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CharacterScaleBuffEffectData) == 32);

}
