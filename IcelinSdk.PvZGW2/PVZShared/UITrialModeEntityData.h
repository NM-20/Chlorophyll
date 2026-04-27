#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870AC0
   RuntimeId:        29E3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A2F
   VfTable:          000000014236D1F8
   Address (Base):   00000001430E3B80
*/
#pragma pack(push, 8)
class UITrialModeEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 TrialModeTimeRemaining; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UITrialModeEntityData) == 32);

}
