#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CCA8
   RuntimeId:        276C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          090A
   VfTable:          0000000142366238
   Address (Base):   00000001430F5A70
*/
#pragma pack(push, 8)
class UICharacterObjectTagOverrideBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Enabled; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UICharacterObjectTagOverrideBuffEffectData) == 32);

}
