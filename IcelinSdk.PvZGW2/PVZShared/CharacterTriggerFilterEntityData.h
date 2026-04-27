#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/TriggerFilterEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D338
   RuntimeId:        27C1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C44
   VfTable:          0000000142365EF8
   Address (Base):   00000001430D3550
*/
#pragma pack(push, 8)
class CharacterTriggerFilterEntityData : public TriggerFilterEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN CheckIsAlive; /* 0x0018 */
  FB_BOOLEAN CheckIsNotInMeleeAction; /* 0x0019 */
  FB_BOOLEAN InvertFilter; /* 0x001A */
  char pad_001B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CharacterTriggerFilterEntityData) == 32);

}
