#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870850
   RuntimeId:        29C1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BE9
   VfTable:          000000014236D608
   Address (Base):   00000001430E34C0
*/
#pragma pack(push, 8)
class UISpectatorEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 CurrentPlayerIndex; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UISpectatorEntityData) == 32);

}
