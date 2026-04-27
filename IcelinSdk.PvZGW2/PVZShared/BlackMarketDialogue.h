#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871708
   RuntimeId:        2A73
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E7A
   VfTable:          000000014236C830
   Address (Base):   00000001430D90B0
*/
#pragma pack(push, 8)
class BlackMarketDialogue : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct BlackMarketDialogueEntry) DialogueEntries; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BlackMarketDialogue) == 24);

}
